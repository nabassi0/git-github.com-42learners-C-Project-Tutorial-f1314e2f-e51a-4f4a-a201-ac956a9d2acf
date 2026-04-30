/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:20:36 by nabassi           #+#    #+#             */
/*   Updated: 2026/04/29 14:26:08 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *) haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		  while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < len)
        {
            j++;
            if (needle[j] == 0)
                return ((char *) haystack + i);
        }
        i++;
        j = 0;
    }
    return (0);
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