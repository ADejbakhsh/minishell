/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adejbakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 14:59:34 by adejbakh          #+#    #+#             */
/*   Updated: 2019/03/15 14:16:01 by adejbakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int				get_next_line(const int fd, char **line)
{
	int		size;
	char	*buf;

	if (fd < 0 || (buf = ft_strnew(BUFF_SIZE)) == NULL || line == NULL)
		return (-1);
	*line = NULL;
	while ((size = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (*line == NULL)
			*line = ft_strnew(BUFF_SIZE); /* retour malloc  */
		if (!(*line = ft_realloc(*line, size)))
			return (-1);
		*line = ft_strcat(*line, buf);
		if (ft_strchr(buf, '\n') != NULL)
			break ;
		ft_bzero(buf, BUFF_SIZE);
	}
	ft_strdel(&buf);
	if (size == -1 || ft_strlen(*line) == 1)
		return (-1);
	return (1);
}
