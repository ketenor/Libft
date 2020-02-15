/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:30:42 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/08 19:44:42 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;
	char	a;

	a = (char)c;
	temp = (char*)s;
	i = 0;
	while (temp[i] != '\0')
		i++;
	if (a == '\0' && i == 0)
		return (temp);
	while (i + 1)
	{
		if (temp[i] == a)
			return (temp + i);
		i--;
	}
	return (NULL);
}
