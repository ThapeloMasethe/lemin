/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:25:29 by tmasethe          #+#    #+#             */
/*   Updated: 2018/05/29 16:53:45 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;
	int			k;
	char		*new_s;

	if (s == NULL)
		return (NULL);
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	j = ft_strlen(s) - 1;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && i < j)
		j--;
	j++;
	new_s = ft_strnew(j - i);
	if (new_s == NULL)
		return (NULL);
	k = 0;
	while (i < j)
	{
		new_s[k++] = s[i++];
	}
	new_s[k] = '\0';
	return (new_s);
}
