/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:21:06 by nabassi           #+#    #+#             */
/*   Updated: 2026/04/28 22:55:09 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memBlock, int searchedChar, size_t size)
{
	unsigned char 	*temp_memBlock;
	size_t			i;
	
	temp_memBlock = (unsigned char *) memBlock;
	i = 0;
	while (i < size)
	{
		if (temp_memBlock[i] == (unsigned char) searchedChar)
			return ((void *) &temp_memBlock[i]);
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