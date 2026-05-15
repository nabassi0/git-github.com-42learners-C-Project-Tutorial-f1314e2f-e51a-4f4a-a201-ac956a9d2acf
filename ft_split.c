/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:34:16 by nabassi           #+#    #+#             */
/*   Updated: 2026/05/15 22:02:03 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	count;
	int	is_sep;

	count = 0;
	i = 0;
	is_sep = 1;
	while (s[i])
	{
		if (s[i] != c && is_sep == 1)
		{
			count++;
			is_sep = 0;
		}
		else if (s[i] == c)
			is_sep = 1;
		i++;
	}
	return (count);
}

static int	ft_word_len(const char *s, char c, int start)
{
	int	i;

	i = start;
	while (s[i] && s[i] != c)
		i++;
	return (i - start);
}

char	**ft_split(const char *s, char c)
{
	char	**arr_s;
	int		i;
	int		j;
	int		len;

	if (!s)
		return (NULL);
	arr_s = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!arr_s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		len = ft_word_len(s, c, i);
		arr_s[j] = ft_substr(s, i, len);
		j++;
		i += len;
	}
	arr_s[j] = NULL;
	return (arr_s);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*oui = "--bonjour--toi--ici";
	printf("%d", ft_split(oui, '-'));
	return (0);
}
*/