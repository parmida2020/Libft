/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 16:18:18 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/14 14:52:29 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

//void    del(void *content)
//{
//    free(content);
//}
//int main(void)
//{
//    t_list  *node;
//    node = ft_lstnew(ft_strdup("hello"));
//    printf("before: %s\n", (char *)node->content);
//    ft_lstdelone(node, del);
//    printf("after: %p\n", node);
//    node = NULL;
//    return (0);
//}