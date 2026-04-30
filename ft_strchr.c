/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:21:38 by nabassi           #+#    #+#             */
/*   Updated: 2026/04/28 12:11:57 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int searchedChar)
{
	unsigned int	i;			

	i = 0;
	while (str[i] != '\0')
	{
		if ((char) searchedChar == str[i])
			return ((char *) &str[i]);
		i++;
	}
	if (str[i] == (char) searchedChar)
		return ((char *) &str[i]);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*str = "bonjour";
	int searchedChar = 106;
	printf("%s", ft_strchr(str, searchedChar));
	return (0);
}
*/