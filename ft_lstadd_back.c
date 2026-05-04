/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 19:01:54 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/04 20:04:44 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last_node;

	if (new == NULL)
		return;
	if (lst == NULL)
	{
		*lst = new;
		return;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
}
//int main(void)
//{
//}