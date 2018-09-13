/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:34:09 by tmasethe          #+#    #+#             */
/*   Updated: 2018/05/31 13:23:58 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	while ((*str1 == *str2) && ((*str1 && *str2) != '\0'))
	{
		str1++;
		str2++;
	}
	return ((unsigned char)(*str1) - (unsigned char)(*str2));
}
