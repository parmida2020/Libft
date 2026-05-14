/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 20:36:30 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/14 15:07:04 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}

//int main(void)
//{
//    t_list *first;
//    t_list *second;
//    first = ft_lstnew("hello");
//    second = ft_lstnew("world");
//    ft_lstadd_back(&first, second);
//    printf("%s\n", (char *)first->content);
//    printf("%s\n", (char *)first->next->content);
//}