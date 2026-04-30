/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 19:35:13 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/30 19:37:16 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst == NULL || new == NULL)
        return;
    new->next = *lst;
    *lst = new;
}
//int main(void)
//{
//    t_list *node = ft_lstnew("hello");
//    t_list *node2 = ft_lstnew(" world");
//    ft_lstadd_front(&node, node);
//    char *s = node->content;
//    printf("%s\n", s);
//}
