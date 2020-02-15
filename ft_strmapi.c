/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:08:23 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/18 20:19:27 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	if (!s || !f)
		return (NULL);
	if (!(res = malloc(ft_strlen(s) + 1)))
		return (NULL);
	i = -1;
	while (s[++i])
		res[i] = (f)(i, s[i]);
	res[i] = '\0';
	return (res);
}
