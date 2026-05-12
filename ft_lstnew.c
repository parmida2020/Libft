/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:42:45 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/11 15:42:51 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
//int main(void)
//{
//    t_list *node = ft_lstnew("Hello");
//    char *s = node->content;
//    printf("%s\n", s);
//}

//    t_list *node1;
//    t_list *node2;
//    t_list *node3;
//    t_list *node4;

//    node1->next = node2;
//    node1->next->next = node3;
//    node1->next->next->next = node4;