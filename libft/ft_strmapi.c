/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:34:29 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/08/12 05:49:07 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	limit;
	char	*result;

	i = 0;
	limit = ft_strlen(s);
	result = (char *) malloc (sizeof(char) * (limit + 1));
	if (!result)
		return (NULL);
	while (i < limit)
	{
		result[i] = f(i, s[i]);
		i ++;
	}
	result[i] = '\0';
	return (result);
}
