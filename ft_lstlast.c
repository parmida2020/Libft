/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 19:56:13 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/14 15:07:38 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
//int main(void)
//{
//    t_list node;
//    t_list node1;
//    node.content = "Hello";
//    node.next = &node1;
//    node1.content = "mida";
//    node1.next = NULL;
//    printf("%s", (char *)ft_lstlast(&node)->content);
//}
