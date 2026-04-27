/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 20:16:56 by nabassi           #+#    #+#             */
/*   Updated: 2026/04/27 12:19:37 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char *temp_pointer;

	temp_pointer = (unsigned char *) pointer;
	while (count > 0)
	{
		*temp_pointer++ = (unsigned char) value;
		count--;
	}
	return pointer;
}