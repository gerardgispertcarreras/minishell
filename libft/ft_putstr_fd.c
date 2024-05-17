/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:11:31 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/17 15:34:16 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(int fd, char *s)
{
	unsigned int	counter;

	counter = 0;
	while (s[counter])
	{
		ft_putchar_fd(fd, s[counter]);
		counter ++;
	}
}
