/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:09:20 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/23 03:56:59 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
#define LEMIN_H

# include <fcntl.h>
# include	"libft/libft.h"

typedef struct	s_room
{
	char		*name;
	char		**links;
}				t_room;

typedef	struct	s_lemin
{
	int			ants;
	int			occupied;
	int			visited;
	char		**path;
	t_room		start;
	t_room		end;
	t_room		rooms;
}				t_lemin;

int				get_edges(t_lemin *get, int fd);
int				check_ants(t_lemin *check, int fd);
void			find_path(t_lemin *find);

#endif
