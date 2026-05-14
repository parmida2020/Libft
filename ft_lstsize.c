/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:20:52 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/14 16:40:55 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
//int main(void)
//{
//    t_list node1;
//    t_list node2;
//    t_list node3;
//    node1.content = "Hello";
//    node1.next = &node2;
//    node2.content = "World";
//    node2.next = &node3;
//    node3.content = "mida";
//    node3.next = NULL;
//    printf("%d", ft_lstsize(&node1));
//}