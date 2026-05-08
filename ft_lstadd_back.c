/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 20:36:30 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/08 22:11:14 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;
    
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
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

void	free_list(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}
int	main(void)
{
	t_list	*list = NULL;

	ft_lstadd_back(&list, ft_lstnew("sdfd"));
	ft_lstadd_back(&list, ft_lstnew("hfgjf"));
	ft_lstadd_back(&list, ft_lstnew("world"));

	print_list(list);

	free_list(list);

	return (0);
}