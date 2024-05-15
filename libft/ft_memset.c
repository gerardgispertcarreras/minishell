/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:21:44 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/15 08:12:37 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			max_limit;

	ptr = (unsigned char *)b;
	max_limit = (size_t) -1;
	while (--len < max_limit)
	{
		ptr[0] = (unsigned char)c;
		ptr ++;
	}
	return (b);
}
