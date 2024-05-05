/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov <rzhdanov@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:32:26 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/05 21:47:56 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft.h"

# include <readline/readline.h>
# include <readline/history.h>

# include <signal.h>
# include <errno.h>
# include <stdarg.h>
# include <stdbool.h>
# include <fcntl.h>

/* === ERROR MESSAGES === */
# define ERR_NO_CMD_LINE_ARGS "Sorry, you cannot use command line arguments \
with this version of minishell."
/* === UTILS ===*/
void	err_exit(const char *err_msg);
int		is_invalid(char *str);
#endif