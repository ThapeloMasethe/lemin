/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 15:05:57 by tmasethe          #+#    #+#             */
/*   Updated: 2018/05/27 15:13:06 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	int		len;
	char	*s;

	i = 0;
	len = (int)ft_strlen(str) + 1;
	s = (char *)str;
	while (i < len)
	{
		if (s[i] == (char)c)
			return (s + i);
		i++;
	}
	return (NULL);
}
