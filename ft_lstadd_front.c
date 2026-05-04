/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 19:35:13 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/04 19:13:39 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return;
	new->next = *lst;
	*lst = new;
}
//int main (void)
//{
//    t_list *head = NULL;
//    t_list *node = ft_lstnew("42 Lisboa");
//    t_list *node2 = ft_lstnew("Hello");
//    ft_lstadd_front(&head, node);
//    ft_lstadd_front(&head, node2);
//    t_list *current = head;
//    while (current)
//    {
//        printf("%s\n", (char *)current->content);
//        current = current->next;
//    }
//    return (0);
//}
