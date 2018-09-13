/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 15:59:59 by tmasethe          #+#    #+#             */
/*   Updated: 2018/05/31 12:43:41 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(int n)
{
	size_t count;

	count = 1;
	while (n /= 10)
	{
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	char			*s;
	size_t			len;
	unsigned int	num;

	len = get_len(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		len++;
	}
	s = ft_strnew(len);
	if (s == NULL)
		return (NULL);
	s[--len] = num % 10 + '0';
	while (num /= 10)
	{
		s[--len] = num % 10 + '0';
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
