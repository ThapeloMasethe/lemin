/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:57:22 by tmasethe          #+#    #+#             */
/*   Updated: 2018/06/06 15:09:08 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f) (t_list *elem))
{
	t_list *link;

	link = lst;
	if (lst != NULL || f != NULL)
	{
		while (link)
		{
			(*f)(link);
			link = link->next;
		}
	}
}
