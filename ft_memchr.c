/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:23:19 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/08 19:43:28 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *temp;

	temp = (char *)s;
	while (n--)
		if (*temp == (char)c)
			return ((void *)temp);
		else
			temp++;
	return (0);
}
