/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:50:06 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/04/17 20:59:17 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	long_len(long n)
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

static long	o_magnitude(long n)
{
	long	o_mag;

	o_mag = 1;
	while (n / 10)
	{
		o_mag *= 10;
		n /= 10;
	}
	return (o_mag);
}

static void	process_negative(char *result, long *n, int *counter)
{
	static char	long_min[20] = "9223372036854775808\0";
	int			i;

	i = 0;
	result[(*counter)++] = '-';
	result[1] = '0';
	(*n) *= -1;
	if ((*n) == LONG_MIN)
	{
		while (long_min[i])
			result[(*counter)++] = long_min[i ++];
	}
}

char	*ft_ltoa(long n)
{
	int		counter;
	char	*result;
	long	o_mag;

	counter = 0;
	o_mag = o_magnitude(n);
	result = (char *) malloc (sizeof(char) * (long_len(n) + 1));
	if (!result)
		return (NULL);
	if (n < 0)
		process_negative(result, &n, &counter);
	if (result[1] == '9')
		return (result);
	while (o_mag)
	{
		result[counter++] = (n / o_mag) + 48;
		n %= o_mag;
		o_mag /= 10;
	}
	result[counter] = '\0';
	return (result);
}
