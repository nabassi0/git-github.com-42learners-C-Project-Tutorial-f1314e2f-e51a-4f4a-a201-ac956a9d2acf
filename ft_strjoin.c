/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:42:05 by nabassi           #+#    #+#             */
/*   Updated: 2026/04/30 18:08:25 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*s_cat;
	int		total_len;

	total_len = (ft_strlen(s1) + ft_strlen(s2));
	s_cat = ft_calloc(total_len + 1, sizeof(char));
	if (!s_cat)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		s_cat[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		s_cat[i] = s2[j];
		j++;
		i++;
	}
	return (s_cat);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*s1 = "coucou ";
	const char	*s2 = "toi";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
}
*/