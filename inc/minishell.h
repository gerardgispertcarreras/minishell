/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:08:19 by ggispert          #+#    #+#             */
/*   Updated: 2024/05/20 15:17:09 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/errno.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <termios.h>
# include <signal.h>
# include <stdarg.h>
# include <stdbool.h>
# include <fcntl.h>
# include <stddef.h>
# include <dirent.h>
# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft.h"


# define PROMPT "minishell: "
# define FILE_RIGHTS 0664
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif
# ifndef DEFAULT_PATH
#  define DEFAULT_PATH "PATH=/usr/local/bin:/usr/bin:/bin:/usr/sbin:/sbin"
# endif
# define EXPORT "declare -x "

/* === ERROR MESSAGES === */
# define ERR_NO_CMD_LINE_ARGS "Sorry, you cannot use command line arguments \
with this version of minishell."
/* === UTILS ===*/
void	err_exit(const char *err_msg);
int		is_invalid(char *str);

// get_next_line.c
void			*read_is_minus_one(char **line, char **buffer);
size_t			new_line_position(char *buffer);
char			*get_left_part(char *buffer, char *line);
char			*get_right_part(char *buffer);
char			*ft_get_next_line(int fd);

// get_next_line_utils.c
void			*free_str(char **str);

/* === SIGNALS === */

//ft_signals.c
void			ft_set_parent_interactive(void);
void			ft_set_parent_active(void);
void			ft_set_parent_heredoc(void);
void			ft_set_child_active(void);

// Error handling functions
int		_open(char *file, char wr);
void	_close(int fd);
void	ft_error(int exit_code, char *source, char *info);
void	ft_custom_error(int exit_code, char *source, char *reason, char *info);

// Pipes
int	*make_pipe(void);
void	handle_pipe_writer_init(int *pipe_fd);
void	handle_pipe_reader_init(int *pipe_fd);

#endif
