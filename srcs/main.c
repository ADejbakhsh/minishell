/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 18:30:25 by adejbakh          #+#    #+#             */
/*   Updated: 2019/03/15 13:57:06 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int main(void)
{
	char	*line;

	while (1)
	{
		ft_putstr("$> ");
		if (get_next_line(0, &line) >= 1)
				parse_input(&line);
		free(line);
	}
	return (0);
}
