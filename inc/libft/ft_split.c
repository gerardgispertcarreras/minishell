/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 05:48:11 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/03/03 19:33:59 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	seg_len(const char *s, char c)
{
	size_t	difference;
	size_t	counter;

	counter = 0;
	while (s[counter] && s[counter] == c)
		counter ++;
	difference = counter;
	while (s[counter] && s[counter] != c)
		counter ++;
	return (counter - difference);
}

static size_t	count_segments(const char *s, char c)
{
	size_t	segment_count;
	size_t	counter;

	segment_count = 0;
	counter = 0;
	while (s[counter])
	{
		while (s[counter] && s[counter] == c)
			counter ++;
		if (s[counter])
			segment_count ++;
		while (s[counter] && s[counter] != c)
			counter ++;
	}
	return (segment_count);
}

static void	*destroy_list(char **str_arr, size_t segment_count)
{
	size_t	i;

	i = 0;
	while (i < segment_count)
		free(str_arr[i++]);
	free(str_arr);
	return (NULL);
}

static char	**create_list(const char *s, char c)
{
	size_t	segment_count;
	char	**str_arr;
	int		i;
	size_t	counter;

	segment_count = count_segments(s, c);
	str_arr = (char **) malloc (sizeof(char *) * (segment_count + 1));
	if (!str_arr)
		return (NULL);
	counter = 0;
	while (counter < segment_count)
	{
		i = -1;
		while (*s && *s == c)
			s++;
		str_arr[counter] = (char *) malloc (sizeof(char) * (seg_len(s, c) + 1));
		if (!str_arr[counter])
			return (destroy_list(str_arr, counter));
		while (s[++i] && s[i] != c)
			str_arr[counter][i] = s[i];
		str_arr[counter][i] = '\0';
		s += i;
		counter ++;
	}
	return (str_arr);
}

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	size_t	segment_count;

	segment_count = count_segments(s, c);
	if (!s)
		return (NULL);
	str_arr = create_list(s, c);
	if (!str_arr)
		return (NULL);
	str_arr[segment_count] = NULL;
	return (str_arr);
}
