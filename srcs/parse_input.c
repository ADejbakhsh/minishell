/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 13:35:32 by adejbakh          #+#    #+#             */
/*   Updated: 2019/03/15 14:14:29 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void		line_guillemet_read(char **line, int *a, int *b, char c)
{
	char *str;

	++b;
	while (1)
	{
		while ((*line)[*b]  && (*line)[*b] != c)
		{
			++*b;
			++*a;
		}
		if ((*line)[*b] != c)
		{
			ft_putstr(">");
			get_next_line(0, &str);
			(*line)[*b - 2] = '\0';
			(*line) = ft_strjoin((*line) , str);
			ft_putendl(*line + *b);
			free(str);
		}
		else
			break ;
	}
}

int		true_size_of_line(char **line)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while ((*line)[b])
	{
		while ((*line)[b] && ((*line)[b] == ' ' || (*line)[b] == '\t'))
			++b;
		while ((*line)[b] && (*line)[b] != ' ' && (*line)[b] != '\t')
		{
			if ((*line)[b] == '"' || (*line)[b] == 39)
				line_guillemet_read(line, &a, &b, (*line)[b]);
			++a;
			++b;
		}
	}
	return (a);
}

char	*parse_input(char **line)
{
	true_size_of_line(line);
	ft_putstr("-------------------\n");
	return (*line);
}
