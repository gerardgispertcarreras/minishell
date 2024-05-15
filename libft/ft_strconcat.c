/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:57:00 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/15 13:11:10 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strconcat(char *s1, char *s2, int free_s1, int free_s2)
{
	ssize_t		s1_len;
	char		*output;

	s1_len = ft_strlen(s1);
	output = (char *) malloc(s1_len + ft_strlen(s2) + 1);
	if (!output)
		return (NULL);
	ft_copy(output, s1, 0);
	ft_copy(&output[s1_len], s2, 0);
	if (free_s1)
		free((void *) s1);
	if (free_s2)
		free((void *) s2);
	return (output);
}
