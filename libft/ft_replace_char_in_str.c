/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_char_in_str.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:19:03 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/17 19:15:32 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_replace_char_in_str(char *s, char c_replace, char c_with)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c_replace)
		{
			*s = c_with;
			count++;
		}
		s++;
	}
}
