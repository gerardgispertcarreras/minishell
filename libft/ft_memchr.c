/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 02:16:43 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/01/30 21:11:06 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	target;
	size_t			counter;

	ptr = (unsigned char *) s;
	target = (unsigned char) c;
	counter = 0;
	while (counter < n)
	{
		if ((unsigned char) ptr[0] == target)
			return (ptr);
		ptr ++;
		counter ++;
	}
	return (NULL);
}
