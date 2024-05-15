/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_found_in_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:20:33 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/15 11:51:02 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_char_found_in_str(const char *s, const char c)
{
	char	*tmp;

	if (!s || !c)
		return (NULL);
	tmp = (char *) s;
	while (*tmp)
	{
		if (*tmp == c)
			return ((char *)tmp);
		tmp++;
	}
	return (NULL);
}
