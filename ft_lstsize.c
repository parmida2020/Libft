/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:26:49 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/04 19:35:13 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	length;

	length = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		length++;
	}
	return (length);
}
//int main (void)
//{
//	t_list *a;
//	a = NULL;
//	ft_lstadd_front(&a, ft_lstnew("1"));
//	ft_lstadd_front(&a, ft_lstnew("2"));
//	ft_lstadd_front(&a, ft_lstnew("3"));
//	ft_lstadd_front(&a, ft_lstnew("4"));
//	ft_lstadd_front(&a, ft_lstnew("5"));
//	ft_lstadd_front(&a, ft_lstnew("6"));
//	ft_lstadd_front(&a, ft_lstnew("7"));
//	ft_lstadd_front(&a, ft_lstnew("8"));
//	ft_lstadd_front(&a, ft_lstnew("9"));
//	int facts = ft_lstsize(a);
//	printf("%d", facts);
//}
