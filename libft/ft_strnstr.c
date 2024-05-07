/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:25:55 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/02/07 12:04:33 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*n)
		return ((char *) h);
	i = 0;
	while (i < len && h[i])
	{
		j = 0;
		while (h[i + j] && n[j] && (i + j) < len && h[i + j] == n[j])
			j++;
		if (!n[j])
			return ((char *) &h[i]);
		i++;
	}
	return (NULL);
}
