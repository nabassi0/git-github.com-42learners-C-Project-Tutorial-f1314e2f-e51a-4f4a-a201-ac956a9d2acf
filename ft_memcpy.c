/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 14:43:22 by nabassi           #+#    #+#             */
/*   Updated: 2026/04/25 15:45:21 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest_str, const void *src_str, size_t n)
{
	unsigned char *temp_dest_str;
	const unsigned char *temp_src_str;

	temp_dest_str = (unsigned char *) dest_str;
	temp_src_str = (const unsigned char *) src_str;
	while (n > 0)
	{
		*temp_dest_str++ = *temp_src_str++;
		n--;
	}
	return (dest_str);
}

#include <stdio.h>
int	main(void)
{
	int	dest = 20;
	int	src = 10;

	printf("%d", ft_memcpy(dest, src, sizeof(int)))
}