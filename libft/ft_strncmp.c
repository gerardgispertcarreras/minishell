/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:32:24 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/01/30 21:14:38 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;
	int		result;

	counter = 0;
	result = 0;
	while ((s1[counter] || s2[counter]) && counter < n)
	{
		if (s1[counter] - s2[counter])
			return ((unsigned char) s1[counter] - (unsigned char) s2[counter]);
		counter ++;
	}
	return (result);
}
