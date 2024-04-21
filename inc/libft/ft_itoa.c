/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:50:06 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/02/02 00:39:42 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(int n)
{
	int	result;

	result = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		result ++;
		if (n == INT_MIN)
			n --;
		n = -n;
	}
	while (n)
	{
		result ++;
		n /= 10;
	}
	return (result);
}

static int	o_magnitude(int n)
{
	int	o_mag;

	o_mag = 1;
	while (n / 10)
	{
		o_mag *= 10;
		n /= 10;
	}
	return (o_mag);
}

char	*ft_itoa(int n)
{
	int		counter;
	char	*result;
	int		o_mag;
	long	num;

	num = n;
	counter = 0;
	o_mag = o_magnitude(n);
	result = (char *) malloc (sizeof(char) * (int_len(n) + 1));
	if (!result)
		return (NULL);
	if (num < 0)
	{
		result[counter++] = '-';
		num = -num;
	}
	while (o_mag)
	{
		result[counter++] = (num / o_mag) + 48;
		num %= o_mag;
		o_mag /= 10;
	}
	result[counter] = '\0';
	return (result);
}
