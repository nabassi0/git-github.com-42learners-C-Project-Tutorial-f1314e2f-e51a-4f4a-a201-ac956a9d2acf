/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:20:36 by nabassi           #+#    #+#             */
/*   Updated: 2026/05/10 22:45:10 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < len && haystack[i])
	{
		while (i + j < len && needle[j] && (haystack[i + j] == needle[j]))
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		else
		{
			j = 0;
			i++;
		}
	}
	if (needle[j] == '\0')
		return ((char *)haystack + i);
	return (NULL);
}
/**
#include <stdio.h>

int	main(void)
{
	char	*first = "bonjour";
	char	*second = "bon";

	printf("%s", ft_strnstr(first, second, 8));
	return (0);
}
*/