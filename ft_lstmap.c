/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 02:36:57 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/18 20:22:24 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*start;

	if (!lst || !f)
		return (NULL);
	if (!(elem = ft_lstnew(f(lst->content))))
		return (NULL);
	start = elem;
	lst = lst->next;
	while (lst)
	{
		if (!(elem->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&elem, del);
			return (NULL);
		}
		elem = elem->next;
		lst = lst->next;
	}
	elem->next = NULL;
	return (start);
}
