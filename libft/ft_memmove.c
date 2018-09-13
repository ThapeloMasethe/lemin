/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 17:08:17 by tmasethe          #+#    #+#             */
/*   Updated: 2018/05/27 14:49:05 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest;
	char		*source;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (source < dest)
	{
		n--;
		while ((int)(n) >= 0)
		{
			dest[n] = source[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}
