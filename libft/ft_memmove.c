/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 00:39:45 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/02/01 21:14:27 by r                ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buffer;
	char	*ptr;

	ptr = (char *) src;
	buffer = (char *) dest;
	if (!n || (dest == NULL && src == NULL))
		return (dest);
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	buffer += n;
	ptr += n;
	while (n)
	{
		*-- buffer = *-- ptr;
		n --;
	}
	return (dest);
}
