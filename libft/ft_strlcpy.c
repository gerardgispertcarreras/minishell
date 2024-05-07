/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:45:51 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/01/30 23:10:21 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;

	counter = 0;
	if (dstsize)
	{
		dstsize --;
		while (dstsize-- && src[counter])
		{
			dst[counter] = src[counter];
			counter ++;
		}
		dst[counter] = '\0';
	}
	return (ft_strlen(src));
}
