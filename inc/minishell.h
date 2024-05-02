/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggispert <ggispert@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:08:19 by ggispert          #+#    #+#             */
/*   Updated: 2024/05/02 15:12:44 by ggispert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <fcntl.h>
# include <stdio.h>
# include <sys/wait.h>
# include "libft/libft.h"

// Error messages macros
# define MINISHELL "minishell: "
# define MALLOCERR "Invalid number of arguments"

// Error handling functions
int		_open(char *file, char wr);
void	_close(int fd);
void	ft_error(int exit_code, char *source, char *info);
void	ft_custom_error(int exit_code, char *source, char *reason, char *info);


#endif