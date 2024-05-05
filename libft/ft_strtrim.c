/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:24:43 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/03/04 01:51:40 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_string(char c, char const *set)
{
	size_t	limit;
	size_t	counter;

	limit = ft_strlen(set);
	counter = 0;
	while (counter < limit)
	{
		if ((unsigned int) c == (unsigned int) set[counter])
			return (1);
		counter ++;
	}
	return (0);
}

static size_t	trim_left(char const *s1, char const *set)
{
	size_t	i;
	size_t	limit;
	size_t	offset;

	i = 0;
	limit = ft_strlen(s1);
	offset = 0;
	while (i < limit && s1[i] && (char_in_string(s1[i], set)))
	{
		offset ++;
		i ++;
	}
	return (offset);
}

static size_t	trim_right(char const *s1, char const *set)
{
	int		i;
	size_t	offset;

	i = 0;
	if (set)
		i = ft_strlen(s1) - 1;
	offset = 0;
	while (i >= 0 && s1[i] && (char_in_string(s1[i], set)))
	{
		offset ++;
		i --;
	}
	return (offset);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	size;
	char	*buffer;
	size_t	left_offset;
	size_t	right_offset;

	if (!s1 || !set)
		return (NULL);
	left_offset = trim_left(s1, set);
	right_offset = trim_right(s1, set);
	if ((left_offset + right_offset) > ft_strlen(s1))
		return (ft_strdup("\0"));
	buffer = (char *) s1;
	buffer += left_offset;
	size = (ft_strlen(s1) - left_offset - right_offset + 1);
	result = (char *) malloc (sizeof(char) * (size));
	if (!result)
		return (NULL);
	ft_strlcpy(result, buffer, size);
	return (result);
}
