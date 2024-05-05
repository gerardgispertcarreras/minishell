/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:12:28 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/02/01 21:16:55 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*src_ptr;
	char	*dest_ptr;
	size_t	counter;

	src_ptr = (char *) src;
	dest_ptr = (char *) dest;
	counter = 0;
	if (!n || (dest == NULL && src == NULL))
		return (dest);
	while (counter < n)
	{
		dest_ptr[counter] = src_ptr[counter];
		counter ++;
	}
	return (dest);
}
