/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 23:01:39 by nabassi           #+#    #+#             */
/*   Updated: 2026/05/11 20:19:41 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*temp;

	if (((count * size) > 2147483647) || (count > 2147483647 && size != 0)
		|| (size > 2147483647 && count != 0))
		return (0);
	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	ft_memset(temp, 0, count * size);
	return (temp);
}
