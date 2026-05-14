/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 15:05:52 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/14 16:37:25 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*new_cont;

	if (!lst || !del || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_cont = f(lst->content);
		node = ft_lstnew(new_cont);
		if (node == NULL)
		{
			del(new_cont);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
//void *add_dot(void *content)
//{
//    return (ft_strjoin((char *)content, "."));
//}
//void	del(void *content)
//{
//	free(content);
//}
//int	main(void)
//{
//	t_list	*list;
//	t_list	*newlist;
//	t_list	*temp;
//	list = ft_lstnew("hello");
//	ft_lstadd_back(&list, ft_lstnew("world"));
//	newlist = ft_lstmap(list, add_dot, del);
//    temp = newlist;
//	while (temp)
//	{
//		printf("%s\n", (char *)temp->content);
//		temp = temp->next;
//	}
//    ft_lstclear(&newlist, del);
//	return (0);
//}