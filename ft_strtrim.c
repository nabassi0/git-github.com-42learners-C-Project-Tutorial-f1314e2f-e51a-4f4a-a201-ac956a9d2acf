/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:33:42 by nabassi           #+#    #+#             */
/*   Updated: 2026/05/02 12:29:28 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*trim_s1;

	if (!s1)
		return (NULL);
	len = (ft_strlen(s1) - 1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len > i && ft_strchr(set, s1[len]))
		len--;
	trim_s1 = ft_substr(s1, (unsigned int)i, (size_t)(len - i + 1));
	return (trim_s1);
}
/*
#include <stdio.h>

int	main(void)
{
	char const	*s1 = "xxxBonjourxxxx";
	char const	*set = "x";

	printf("%s", ft_strtrim(s1, set));
	return (0);
}
*/
