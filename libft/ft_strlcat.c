/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:43:38 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/01/30 21:16:41 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	offset;
	size_t	s_counter;
	size_t	limit;
	size_t	initial_dst_len;

	offset = ft_strlen(dst);
	initial_dst_len = offset;
	s_counter = 0;
	if (offset >= dstsize || dstsize == 0)
		return (ft_strlen(src) + dstsize);
	limit = dstsize - offset - 1;
	while (limit-- && src[s_counter])
	{
		dst[s_counter + offset] = src[s_counter];
		s_counter ++;
	}
	dst[offset + s_counter] = '\0';
	return (ft_strlen(src) + initial_dst_len);
}
