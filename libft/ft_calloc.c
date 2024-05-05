/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 05:10:01 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/03/04 01:32:38 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			mem_space;

	mem_space = nmemb * size;
	if (mem_space > INT_MAX)
		return (NULL);
	ptr = (unsigned char *) malloc (mem_space);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, mem_space);
	return (ptr);
}
