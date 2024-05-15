/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_char_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:15:46 by rzhdanov          #+#    #+#             */
/*   Updated: 2024/05/15 11:15:06 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_free_char_array(char **array)
{
	size_t	i;

	i = 0;
	while (array && array[i])
	{
		free((void *) array[i]);
		array[i] = NULL;
		i++;
	}
	free((void *) array);
	array = NULL;
}