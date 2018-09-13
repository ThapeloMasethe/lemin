/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isrevsorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 09:09:20 by tmasethe          #+#    #+#             */
/*   Updated: 2018/09/04 12:07:02 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isrevsorted(int *arr, unsigned int n)
{
	unsigned int i;

	i = 1;
	if (n == 0 || n == 1)
		return (1);
	while (i < n - 1)
	{
		if (arr[i] < arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}
