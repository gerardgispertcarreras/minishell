/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 22:54:09 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/24 02:38:31 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

void	ft_parent_interactive_sigint(int sign)
{
	if (sign == SIGINT)
	{
		write(1, "\n", 1);
		rl_replace_line("", 0);
		rl_on_new_line();
		rl_redisplay();
	}
}

void	ft_parent_active_sigint(int sign)
{
	if (sign == SIGINT)
	{
		write(1, "\n", 1);
		rl_replace_line("", 0);
	}
}

void	ft_parent_active_sigquit(int sign)
{
	if (sign == SIGQUIT)
	{
		ft_putstr_fd(1, "Quit\n");
	}
}
