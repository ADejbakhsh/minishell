/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 11:34:15 by adejbakh          #+#    #+#             */
/*   Updated: 2018/11/09 12:23:36 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	char	*b;
	int		a;

	a = 0;
	b = (char*)s;
	while (n > 0)
	{
		b[a] = 0;
		a++;
		n--;
	}
	s = b;
	return ((void*)s);
}