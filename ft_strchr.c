/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:26:47 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/08 19:46:01 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*temp;
	char	a;

	a = (char)c;
	temp = (char*)s;
	i = -1;
	while (temp[++i] != '\0')
		if (temp[i] == a)
			return (temp + i);
	if (a == '\0')
		return (temp + i);
	return (NULL);
}
