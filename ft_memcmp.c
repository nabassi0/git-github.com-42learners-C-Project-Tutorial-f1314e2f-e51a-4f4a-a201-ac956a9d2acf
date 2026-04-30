/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:20:51 by nabassi           #+#    #+#             */
/*   Updated: 2026/04/30 13:31:24 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_cast;
	unsigned char	*s2_cast;

	s1_cast = (unsigned char *) s1;
	s2_cast = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (s1_cast[i] != s2_cast[i])
			return (s1_cast[i] - s2_cast[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*first = "bénzour";
	const char	*second = "bonjour";

	printf("%d", ft_memcmp(first, second, 7));
	return (0);
}
*/
