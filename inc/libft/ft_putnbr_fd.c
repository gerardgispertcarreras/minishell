/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:37:07 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/02/10 22:57:37 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	buffer;

	buffer = n;
	if (buffer < 0)
	{
		buffer = -buffer;
		ft_putchar_fd('-', fd);
	}
	if (buffer >= 10)
	{
		ft_putnbr_fd(buffer / 10, fd);
		ft_putchar_fd(buffer % 10 + 48, fd);
	}
	else
		ft_putchar_fd(buffer + 48, fd);
}
