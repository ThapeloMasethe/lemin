/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:01:59 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/17 10:41:52 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem-in.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	//int		ants;
	//char	*start;
	t_lemin lemin;
	//int		end;
	//char	*line;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
		fd = open(argv[1], O_RDONLY);
	else
		return (2);
	//get_next_line(fd, &line);
	if (!check_ants(&lemin, fd) || !get_edges(&lemin, fd))
	{
		ft_putendl("ERROR");
		return (0);
	}
	// //lemin.ants = ft_atoi(line);
	// ft_strdel(&line);
	// get_edges(&lemin, fd);
	// ft_putendl(lemin.start.name);
	// ft_putendl(lemin.end.name);
	return (0);
}
