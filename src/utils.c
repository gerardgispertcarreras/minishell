/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov <rzhdanov@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 21:19:14 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/05 21:45:14 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	err_exit(const char *err_msg)
{
	printf("%s\n", err_msg);
	exit(EXIT_FAILURE);
}

int	is_invalid(char *str) // TODO: currently it is just a placeholder function
// to compile the program
{
	if(str != NULL && str[0] == 'A')
		return (1);
	return (0);
}