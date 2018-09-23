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

void	find_path(t_lemin *find)
{
	int i;
	char **temp;
	char *hold;

	i = 0;
	find->occupied = 0;
	while (find->rooms.links[i])
	{
		temp = ft_strsplit(find->rooms.links[i], '-');
		if (!ft_strcmp(temp[0], find->start.name))
		{
			ft_putstr("L1-");
			ft_putstr(temp[1]);
		}
		hold = temp[1];
		i++;
	}
}
