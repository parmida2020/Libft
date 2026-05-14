/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:11:57 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/13 12:18:35 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
//int main(void)
//{
//	printf("%d\n", ft_isalnum('c'));
//	printf("%d\n", ft_isalnum(-128));
//	printf("%d\n", ft_isalnum(255));
//	printf("%d\n", ft_isalnum('7'));
//	printf("%d\n", ft_isalnum('\t'));
//}