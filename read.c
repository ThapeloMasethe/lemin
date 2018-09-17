/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 13:56:01 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/17 10:08:29 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem-in.h"

int		read_farm(t_lemin *lemin, int fd);
{
	char *line;

	get_next_line(fd, &line);
	if (!check_ants(&lemin, line))
		return (0);
	else if (check_line(&lemin, line))
		ft_putendl(line);
}
