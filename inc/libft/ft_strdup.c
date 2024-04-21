/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 15:00:30 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/02/12 08:31:15 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	counter;
	char	*result;

	counter = 0;
	result = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!result)
		return (NULL);
	while (s1[counter])
	{
		result[counter] = s1[counter];
		counter ++;
	}
	result[counter] = '\0';
	return (result);
}
