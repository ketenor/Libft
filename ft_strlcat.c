/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 16:50:26 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/13 02:12:43 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_strnlen(char *str, size_t maxlen)
{
	size_t i;

	i = 0;
	while (i < maxlen && str[i])
		i++;
	return (i);
}

size_t			ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t lendest;

	lendest = ft_strnlen(dest, dstsize);
	if (dstsize && (dstsize > lendest))
		return (lendest + ft_strlcpy(dest + lendest, src, dstsize - lendest));
	return (lendest + ft_strlen(src));
}
