/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:19:38 by tmasethe          #+#    #+#             */
/*   Updated: 2018/06/06 16:00:20 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *hold;

	if (alst != NULL && del != NULL)
	{
		hold = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = hold;
	}
	*alst = NULL;
}
