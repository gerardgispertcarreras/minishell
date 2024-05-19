/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:00:33 by ggispert          #+#    #+#             */
/*   Updated: 2024/05/19 15:16:11 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	*make_pipe(void)
{
	int	*pipe_fd;

	pipe_fd = (int *)malloc(sizeof(int) * 2);
	if (pipe_fd == NULL)
		return NULL;
	if (pipe(pipe_fd) == -1)
		return NULL;
	return pipe_fd;
}

void	handle_pipe_writer_init(int *pipe_fd)
{
	_close(pipe_fd[0]); // Close the read end of the pipe
	dup2(pipe_fd[1], STDOUT_FILENO); // Write to the pipe
	_close(pipe_fd[1]); // Close the write end of the pipe
}

void	handle_pipe_reader_init(int *pipe_fd)
{
	_close(pipe_fd[1]); // Close the write end of the pipe
	dup2(pipe_fd[0], STDIN_FILENO); // Read from the pipe
	_close(pipe_fd[0]); // Close the read end of the pipe
}
