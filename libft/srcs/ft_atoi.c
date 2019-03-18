/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 13:19:52 by adejbakh          #+#    #+#             */
/*   Updated: 2018/11/29 14:24:56 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int				ft_atoi(const char *nptr)
{
	char	c;
	long	a;
	long	b;

	a = 0;
	b = 0;
	c = 0;
	while ((nptr[a] >= 9 && nptr[a] <= 13) || nptr[a] == 32)
		a++;
	if (nptr[a] == '-' || nptr[a] == '+')
	{
		if (nptr[a] == '-')
			c = 1;
		a++;
	}
	while (nptr[a] >= '0' && nptr[a] <= '9')
	{
		b = b * 10 + (nptr[a] - 48);
		a++;
		if (b < 0)
			return (c ? 0 : -1);
	}
	if (c == 1)
		return (-b);
	return (b);
}
