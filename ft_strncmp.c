/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:21:15 by nabassi           #+#    #+#             */
/*   Updated: 2026/04/28 19:56:46 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t len)
{
	size_t	i;

	i = 0;
	while ((first[i] || second[i]) && i < len)
	{
		if ((unsigned char)first[i] != (unsigned char)second[i])
			return ((unsigned char)first[i] - (unsigned char)second[i]);
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

	printf("%d", ft_strncmp(first, second, 7));
	return (0);
}
*/