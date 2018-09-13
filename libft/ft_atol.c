/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 11:18:00 by tmasethe          #+#    #+#             */
/*   Updated: 2018/08/27 12:12:20 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atol(const char *s)
{
	int			i;
	int long	num;
	int long	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (ft_isspace(s[i]))
		i++;
	sign = (s[i] == '-') ? -1 : 1;
	(s[i] == '-' || s[i] == '+') ? i++ : 0;
	while (s[i] && ft_isdigit(s[i]))
		num = num * 10 + (s[i++] - '0');
	return (num * sign);
}
