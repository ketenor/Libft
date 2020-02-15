/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:08:44 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/08 19:42:58 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dtmp;
	const unsigned char	*stmp;
	void				*flag;

	dtmp = (unsigned char *)dest;
	stmp = (const unsigned char *)src;
	flag = ft_memchr(src, c, n);
	if (flag)
		n = flag - src + 1;
	while (n--)
		*dtmp++ = *stmp++;
	return ((flag) ? dtmp : 0);
}
