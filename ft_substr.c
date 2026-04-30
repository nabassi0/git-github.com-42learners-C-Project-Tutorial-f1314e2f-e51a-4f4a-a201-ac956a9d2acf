/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 23:30:07 by nabassi           #+#    #+#             */
/*   Updated: 2026/04/30 15:41:14 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	s_len;
	char			*s_temp;

	s_len = (unsigned int) ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > (start + s_len))
		len = (start + s_len);
	s_temp = ft_calloc(len + 1, sizeof(char));
	i = 0;
	while (i < len)
	{
		s_temp[i] = s[start + i];
		i++;
	}
	return (s_temp);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *s = "bonjour";
	printf("%s", ft_substr(s, 3, 2));
	return (0);
}
*/	