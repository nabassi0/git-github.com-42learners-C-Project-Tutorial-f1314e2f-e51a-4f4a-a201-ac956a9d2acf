/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:34:41 by nabassi           #+#    #+#             */
/*   Updated: 2026/05/15 22:01:22 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = n * (-1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	int		cpy;

	len = (ft_count_digits(n) + 1);
	cpy = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		len = len + 1;
		n *= -1;
	}
	str = ft_calloc(len, sizeof(char));
	i = len - 2;
	while (i >= 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i --;
	}
	if (cpy < 0)
		str[0] = '-';
	return (str);
}
