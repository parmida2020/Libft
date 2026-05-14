/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 14:32:14 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/14 14:11:29 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

//void    print_content(void *content)
//{
//    printf("%s\n", (char *)content);
//}
//int main (void)
//{
//    t_list *lst = ft_lstnew("hello");
//    ft_lstadd_back(&lst, ft_lstnew("world"));
//    ft_lstadd_back(&lst, ft_lstnew("mida"));
//    ft_lstiter(lst, print_content);
//    return (0);
//}