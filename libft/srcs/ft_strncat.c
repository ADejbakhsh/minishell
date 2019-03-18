/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 15:07:02 by adejbakh          #+#    #+#             */
/*   Updated: 2019/03/09 15:49:54 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int	a;
	int b;

	a = 0;
	b = 0;
	while (dest[b] != '\0')
		b++;
	while (src[a] != '\0' && n > 0)
	{
		dest[b] = src[a];
		a++;
		b++;
		n--;
	}
	dest[b] = '\0';
	return (dest);
}
