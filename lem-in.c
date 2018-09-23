/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:01:59 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/23 03:57:49 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem-in.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	t_lemin lemin;
	//t_room  room;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	if (!check_ants(&lemin, fd) || !get_edges(&lemin, fd))
	{
		ft_putendl("ERROR");
		return (0);
	}
	ft_putendl("\n=============");
	ft_putendl("THE LINKS: ");
	int i = 0;
	while (lemin.rooms.links[i])
	{
		ft_putendl(lemin.rooms.links[i]);
		i++;
	}
	ft_putendl("=============");
	ft_putstr("Start: ");
	ft_putendl(lemin.start.name);
	ft_putstr("End: ");
	ft_putendl(lemin.end.name);
	ft_putendl("");
	find_path(&lemin);
	//ft_putendl(lemin.rooms.links[0]);
	return (0);
}
