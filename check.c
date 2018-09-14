/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ants.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 12:33:58 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/13 14:04:21 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem-in.h"

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
		//else
			//ft_putendl(line);
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
		//ft_strdel(&line);
		
	}
	return (1);
}