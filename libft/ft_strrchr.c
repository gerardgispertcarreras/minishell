/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:10:28 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/08/12 05:52:32 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char*s, int c)
{
	size_t	counter;
	char	target;

	counter = ft_strlen(s);
	target = (char) c;
	if (target == 0)
		return ((char *)s + counter);
	if (!counter)
		return (NULL);
	while (--counter)
	{
		if (s[counter] == target)
			return ((char *) s + counter);
	}
	if (s[counter] == target)
		return ((char *) s);
	return (NULL);
}
