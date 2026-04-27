/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:51:33 by nabassi           #+#    #+#             */
/*   Updated: 2026/04/27 12:21:12 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char		*temp_dest;
	unsigned const char	*temp_src;
	size_t				i;

	temp_dest = (unsigned char *) dest;
	temp_src = (unsigned char *) src;
	if (!dest || !src)
		return (0);
	i = 0;
	if (dest > src)
	{
		while (size > 0)
		{
			temp_dest[size] = temp_src[size];
			size--;
		}
	}
	else
	{
		while (i < size)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char *src = "ABCDE";

	printf("%s\n", src);
	printf("%s\n", ft_memmove(src + 1, src, 3));
	return (0);
}
*/