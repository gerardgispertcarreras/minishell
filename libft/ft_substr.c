/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:45:33 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/08/12 06:12:04 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	sub_len(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < start && s[i])
		i ++;
	while (j < len && s[i])
	{
		i ++;
		j ++;
	}
	return (j);
}

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*sub_s;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
	{
		sub_s = (char *) malloc (sizeof(char));
		if (!sub_s)
			return (NULL);
	}
	else
	{
		i = sub_len(s, start, len);
		sub_s = (char *) malloc (sizeof(char) * (i + 1));
		if (!sub_s)
			return (NULL);
		i = 0;
		while (len -- && s[start + i])
		{
			sub_s[i] = s[start + i];
			i ++;
		}
	}
	sub_s[i] = '\0';
	return (sub_s);
}
