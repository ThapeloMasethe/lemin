/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:37:45 by tmasethe          #+#    #+#             */
/*   Updated: 2018/05/31 14:26:46 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putnbr_fd(int n, int fd)
{
	long int num;

	num = (long int)n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = num * -1;
	}
	if (num >= 0 && num < 10)
		ft_putchar_fd(num + '0', fd);
	else
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	return (0);
}
