/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:51:58 by rzhdanov          #+#    #+#             */
/*   Updated: 2023/03/13 11:17:11 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*buffer;
	void	*tmp_content;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		tmp_content = f(lst->content);
		buffer = ft_lstnew(tmp_content);
		if (!buffer)
		{
			del(tmp_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, buffer);
		lst = lst->next;
	}
	return (new_list);
}
