/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:11:29 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/11 23:26:23 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	taille(int n)
{
	int		i;

	i = 0;
	if ((n < 0) && (i = i + 1))
		n *= -1;
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

static	int	check_n(int n)
{
	if (n == -2147483648)
		return (-1);
	if (n > 2147483647)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		t;
	int		minus;

	t = taille(n);
	i = t;
	minus = 0;
	if (!(res = malloc(t + 1)))
		return (NULL);
	if (check_n(n))
		return ((check_n(n) == -1) ? ft_strdup("-2147483648") : NULL);
	if (n < 0)
	{
		res[0] = '-';
		minus = 1;
		n *= -1;
	}
	while (--i >= minus)
	{
		res[i] = n % 10 + '0';
		n /= 10;
	}
	res[t] = '\0';
	return (res);
}
