/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/23 03:19:59 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/23 04:08:41 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem-in.h"

void	get_path(t_lemin *get, char *room, int index)
{
	if (!get->path)
		get->path = (char **)malloc(sizeof(char *) * 4096);
	get->path[index] = ft_strdup(room);
}
void	find_path(t_lemin *find)
{
	int i;
	int j;
	char **temp;
	char *current;
	
	i = 0;
	j = 0;
	current = find->start.name;
	ft_putendl(current);
	find->path = (char **)malloc(sizeof(char *) * 4096);
	while (find->rooms.links[i])
	{
		
		temp = ft_strsplit(find->rooms.links[i], '-');
		if (!ft_strcmp(temp[0], current))
		{
			get_path(find, temp[1], j);
			ft_putendl(find->path[j]);
			current = temp[1];
			j++;
		}
		else if (!ft_strcmp(temp[1], current))
		{
			get_path(find, temp[0], j);
			ft_putendl(find->path[j]);
			current = temp[0];
			j++;
		}
		if (!ft_strcmp(current, find->end.name))
			exit(0);
		i++;
	}
	if (find->rooms.links[i] == NULL && ft_strcmp(current, find->end.name))
		ft_putendl("Error, No Path!");
}