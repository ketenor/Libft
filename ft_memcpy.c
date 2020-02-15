/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:40:14 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/08 20:43:14 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned	char	*dtmp;
	const		char	*stmp;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	i = -1;
	dtmp = (unsigned char*)dest;
	stmp = (const char*)src;
	while (++i < n)
		dtmp[i] = stmp[i];
	return (dest);
}
