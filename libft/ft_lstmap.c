/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 15:09:18 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/12 16:01:09 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*link;

	link = lst;
	if (lst == NULL || f == NULL)
		return (NULL);
	new_lst = (*f)(link);
	link = new_lst;
	while (lst->next != NULL)
	{
		lst = lst->next;
		link->next = (*f)(lst);
		link = link->next;
	}
	return (new_lst);
}
