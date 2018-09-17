/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rooms.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:13:45 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/17 10:05:56 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem-in.h"

void	get_edges(t_lemin *get, int fd)
{
	int i;
	char *line;

	i = 0;
	while (get_next_line(fd, &line))
	{
		if (!ft_strcmp("##start", line))
		{
			ft_strdel(&line);
			get_next_line(fd, &line);
			get->start.name = *ft_strsplit(line, ' ');
		}
		else if (!ft_strcmp("##end", line))
		{
			ft_strdel(&line);
			get_next_line(fd, &line);
			get->end.name = *ft_strsplit(line, ' ');
		}
	}
}
