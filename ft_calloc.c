/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 20:14:48 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/08 19:49:23 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *temp;

	if (!(temp = malloc(count * size)))
		return (NULL);
	ft_bzero(temp, count * size);
	return (temp);
}
