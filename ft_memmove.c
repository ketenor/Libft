/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:22:23 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/08 19:43:14 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*stmp;
	unsigned char	*dtmp;

	if (!dst && !src)
		return (NULL);
	stmp = (unsigned char*)src;
	dtmp = (unsigned char*)dst;
	i = -1;
	if (stmp > dtmp)
		while (++i < len)
			dtmp[i] = stmp[i];
	if (stmp < dtmp)
	{
		i = len;
		while (i--)
			dtmp[i] = stmp[i];
	}
	return (dst);
}
