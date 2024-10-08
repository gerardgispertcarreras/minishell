/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:41:19 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/17 15:24:45 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static int	ft_set_sign(char c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (-1);
	return (0);
}

long	ft_atoi(const char *str)
{
	int		counter;
	long	result;
	int		sign;

	counter = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(str[counter]))
		counter ++;
	if (str[counter] == '-' || str[counter] == '+')
		sign = ft_set_sign(str[counter++]);
	while (ft_isdigit(str[counter]))
	{
		result *= 10;
		result += str[counter] - 48;
		counter ++;
	}
	return ((long) result * sign);
}
