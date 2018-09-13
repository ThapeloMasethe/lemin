/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmasethe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 09:39:41 by tmasethe          #+#    #+#             */
/*   Updated: 2018/06/25 16:37:14 by tmasethe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	word_count(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static	int	word_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		if (s[i] != c)
			len++;
		i++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (!s || !(str = (char **)malloc(sizeof(*str) * (word_count(s, c) + 1))))
		return (NULL);
	while (i < word_count(s, c))
	{
		k = 0;
		if (!(str[i] = ft_strnew(word_len(s + j, c) + 1)))
			str[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str[i][k++] = s[j++];
		str[i][k] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}
