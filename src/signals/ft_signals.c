/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signals.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:53:30 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/20 15:16:17 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

void	ft_set_parent_interactive(void)
{
	signal(SIGINT, &ft_parent_interactive_sigint);
	signal(SIGQUIT, SIG_IGN);
}

void	ft_set_parent_active(void)
{
	signal(SIGINT, &ft_parent_active_sigint);
	signal(SIGQUIT, &ft_parent_active_sigquit);
}

void	ft_set_parent_heredoc(void)
{
	struct sigaction	response;

	sigemptyset(&response.sa_mask);
	response.sa_flags = SA_SIGINFO;
	response.sa_handler = &ft_parent_active_sigint;
	sigaction(SIGINT, &response, NULL);
	signal(SIGQUIT, SIG_IGN);
}

void	ft_set_child_active(void)
{
	signal(SIGINT, SIG_DFL);
	signal(SIGQUIT, SIG_DFL);
}
