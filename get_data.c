/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 16:31:18 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/27 16:31:21 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem-in.h"

static int 	islink(char *link)
{
	int i;

	i = 0;
	while (link[i])
	{
		if (link[i] == '-')
			return (1);
		i++;
	}
	return(0);
}

static  void    get_links(t_lemin *get, char *line, int index)
{
	if (!get->rooms.links)
		get->rooms.links = (char **)malloc(sizeof(char *) * 4096);
	get->rooms.links[index] = ft_strdup(line);
}

int		get_edges(t_lemin *get, int fd)
{
	char **temp;
	char *line;
	int index;

	index = 0;
	while (get_next_line(fd, &line) > 0)
	{
		if (line[0] == '#' && (!ft_strcmp("##start", line)))
		{
			ft_putendl(line);
			ft_strdel(&line);
			get_next_line(fd, &line);
			temp = ft_strsplit(line, ' ');
			get->start.name = ft_strdup(temp[0]);
			ft_putendl(line);
			ft_strdel(temp);
		}
		else if (line[0] == '#' && (!ft_strcmp("##end", line)))
		{
			ft_putendl(line);
			ft_strdel(&line);
			get_next_line(fd, &line);
			temp = ft_strsplit(line, ' ');
			get->end.name = ft_strdup(temp[0]);
			ft_putendl(line);
			ft_strdel(temp);
		}
		else if (islink(line))
		{
			get_links(get, line, index);
			ft_putendl(line);
			ft_strdel(&line);
			index++;
		}
		else
		{
			ft_putendl(line);
			ft_strdel(&line);
		}
	}
	ft_putendl("");
	return (1);
}

