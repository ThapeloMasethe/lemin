/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:23:33 by tmasethe          #+#    #+#             */
/*   Updated: 2018/06/06 15:36:23 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *link;
	t_list *next_link;

	link = *alst;
	while (link != NULL)
	{
		next_link = link->next;
		del(link->content, link->content_size);
		free(link);
		link = next_link;
	}
	*alst = NULL;
}
