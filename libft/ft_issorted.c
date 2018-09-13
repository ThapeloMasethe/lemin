/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:32:43 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/03 13:43:20 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_issorted(int *arr, unsigned int n)
{
	unsigned int i;

	i = 1;
	if (n == 0 || n == 1)
		return (1);
	while (i < n)
	{
		if (arr[i - 1] > arr[i])
			return (0);
		i++;
	}
	return (1);
}
