/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 01:33:41 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/12 23:14:16 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*res;

	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	res = ft_lstlast(*alst);
	if (!res)
		return ;
	res->next = new;
}
