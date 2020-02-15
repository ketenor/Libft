/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketenor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 15:00:35 by ketenor           #+#    #+#             */
/*   Updated: 2019/12/11 23:34:39 by ketenor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_space(const char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f')
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	num;

	num = 0;
	i = is_space(str);
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (num > 214748364)
			return (sign == -1 ? 0 : -1);
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	return (num * sign);
}
