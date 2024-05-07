/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 07:09:48 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/01/30 23:08:54 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				counter;
	const unsigned char	*str1;
	const unsigned char	*str2;

	counter = 0;
	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	while (counter < n)
	{
		if (str1[counter] - str2[counter])
			return (str1[counter] - str2[counter]);
		counter ++;
	}
	return (0);
}
