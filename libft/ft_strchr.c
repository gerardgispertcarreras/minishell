/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:03:01 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/01/30 21:16:32 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned long	limit;
	char			target;

	limit = ft_strlen(s);
	target = (char) c;
	if (target == 0)
		return ((char *)s + limit);
	while (limit --)
	{
		if (s[0] == target)
		{
			return ((char *)s);
		}
		s++;
	}
	return (0);
}
