/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:01:59 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/21 14:45:54 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem-in.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	t_lemin lemin;

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
	ft_putendl("THE LINKS: ");
	ft_putendl(lemin.rooms.links[0]);
	return (0);
}
