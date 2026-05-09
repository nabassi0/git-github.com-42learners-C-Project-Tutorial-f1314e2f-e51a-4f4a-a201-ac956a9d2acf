/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:21:06 by nabassi           #+#    #+#             */
/*   Updated: 2026/05/09 22:31:19 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memblock, int searchedchar, size_t size)
{
	unsigned char	*temp_memblock;
	size_t			i;

	temp_memblock = (unsigned char *) memblock;
	i = 0;
	while (i < size)
	{
		if (temp_memblock[i] == (unsigned char) searchedchar)
			return ((void *) &temp_memblock[i]);
		i++;
	}
	return (NULL);
}
/**e <stdio.h>

int	main(void)
{
	char	*memBlock = "bonjour";
	const unsigned int size = 7;

	printf("%s", (char *)ft_memchr(memBlock, 106, size));
	return (0);
}
*/