/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggispert <ggispert@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:08:19 by ggispert          #+#    #+#             */
/*   Updated: 2024/05/14 20:08:08 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft.h"
# include <stdio.h>
# include <sys/wait.h>

# include <readline/readline.h>
# include <readline/history.h>

# include <signal.h>
# include <errno.h>
# include <stdarg.h>
# include <stdbool.h>
# include <fcntl.h>

# define MINISHELL "minishell: "

/* === ERROR MESSAGES === */
# define ERR_NO_CMD_LINE_ARGS "Sorry, you cannot use command line arguments \
with this version of minishell."
/* === UTILS ===*/
void	err_exit(const char *err_msg);
int		is_invalid(char *str);

// Error handling functions
int		_open(char *file, char wr);
void	_close(int fd);
void	ft_error(int exit_code, char *source, char *info);
void	ft_custom_error(int exit_code, char *source, char *reason, char *info);

#endif
