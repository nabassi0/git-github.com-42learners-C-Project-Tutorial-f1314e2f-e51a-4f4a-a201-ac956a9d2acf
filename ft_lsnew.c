/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabassi <nabassi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 23:27:57 by nabassi           #+#    #+#             */
/*   Updated: 2026/05/10 19:51:18 by nabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*a = ft_lstnew("Coucou ");
	t_list	*b = ft_lstnew("toi, ");
	t_list	*c = ft_lstnew("comment tu vas ?");

	a->next = b;
	b->next = c;
	t_list	*current = a;
	while (current)
	{
		printf("%s", (char *) current->content);
		current = current->next;
	}
}
*/
