/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:33:13 by tmasethe          #+#    #+#             */
/*   Updated: 2018/05/27 15:13:45 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		n;
	char	*s;

	n = (int)ft_strlen(str) + 1;
	s = (char *)str;
	while (n--)
	{
		if (s[n] == (char)c)
			return (s + n);
	}
	return (NULL);
}
