/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ants.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:33:58 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/21 14:51:00 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem-in.h"

int		check_error(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		check_ants(t_lemin *check, int fd)
{
	int		i;
	char	*line;
	
	i = 0;
	while (get_next_line(fd, &line) > 0)
	{
		if (line[0] == '#' && (!ft_strcmp("##start", line)
			|| !ft_strcmp("##end", line)))
			return (0);
		if (line[0] != '#')
		{
			while (line[i])
			{
				if (!ft_isdigit(line[i]))
					return (0);
				i++;
			}
		}
		if (ft_strlen(line) == 0)
			return (0);
		else if (line[0] != '#')
		{
			check->ants = ft_atoi(line);
			ft_putendl(line);
			ft_strdel(&line);
			return (1);
		}
		ft_putendl(line);
	}
	return (1);
}

void	get_links(t_lemin *get, char *line)
{
	size_t i;
	int islink;

	i = 0;
	islink = 0;
	get->rooms.links = (char **)malloc(sizeof(char *) * 4096);
	get->rooms.links[0] = (char *)malloc(sizeof(char) * ft_strlen(line));
	//get->rooms.links[0] = ft_strdup(line);
	while (line[i])
	{
		if (line[i] == '-')
			get->rooms.links[0] = ft_strdup(line);
		i++;
	}
}

int		get_edges(t_lemin *get, int fd)
{
	char **temp;
	char *line;

	while (get_next_line(fd, &line) > 0)
	{
		if (line[0] == '#' && (!ft_strcmp("##start", line)))
		{
			ft_putendl(line);
			ft_strdel(&line);
			get_next_line(fd, &line);
			temp = ft_strsplit(line, ' ');
			get->start.name = temp[0];
			ft_putendl(line);
			ft_strdel(temp);
		}
		else if (line[0] == '#' && (!ft_strcmp("##end", line)))
		{
			ft_putendl(line);
			ft_strdel(&line);
			get_next_line(fd, &line);
			temp = ft_strsplit(line, ' ');
			get->end.name = temp[0];
			ft_putendl(line);
			ft_strdel(temp);
		}
		else
		{
			//get_links(get, line);
			ft_putendl(line);
			get_links(get, line);
			ft_strdel(&line);
		}
	}
	return (1);
}
