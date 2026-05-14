/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:39:15 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/14 10:49:57 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
//int main (void)
//{
//	printf("%d\n", ft_toupper('v'));
//	printf("%d\n", ft_toupper('{'));
//	printf("%d\n", ft_toupper('`'));
//}
