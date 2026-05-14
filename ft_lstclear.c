/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 10:22:44 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/14 16:10:30 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

//void    del(void *content)
//{
//    free(content);
//}
//int	main(void)
//{
//	t_list	*list;
//	char	*str1;
//	char	*str2;
//	str1 = strdup("hello");
//	str2 = strdup("world");
//	list = ft_lstnew(str1);
//	ft_lstadd_back(&list, ft_lstnew(str2));
//	ft_lstclear(&list, del);
//	if (list == NULL)
//		printf("List cleared!\n");
//	return (0);
//}