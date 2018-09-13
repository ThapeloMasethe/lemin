/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 15:44:19 by tmasethe          #+#    #+#             */
/*   Updated: 2018/08/21 15:47:43 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_intdup(int const *src, size_t len)
{
	int *i;

	i = (int *)malloc(sizeof(int) * len);
	ft_memcpy(i, src, sizeof(int) * len);
	return (i);
}
