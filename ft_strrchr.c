/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:21:23 by nabassi           #+#    #+#             */
/*   Updated: 2026/04/28 12:38:03 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int searchedChar)
{
	unsigned int	i;	
	char			*cur_adr;		

	cur_adr = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((char) searchedChar == str[i])
			cur_adr = ((char *) &str[i]);
		i++;
	}
	if (str[i] == (char) searchedChar)
		return ((char *) &str[i]);
	else
		return (cur_adr);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*str = "bonjour";
	int searchedChar = 111;
	printf("%s", ft_strrchr(str, searchedChar));
	return (0);
}
*/
