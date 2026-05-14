/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:31:16 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/13 12:22:34 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
//int main(void)
//{
//	printf("%d\n", ft_isalpha('0'));
//	printf("%d\n", ft_isalpha(100000));
//	printf("%d\n", ft_isalpha('A'));
//	printf("%d", ft_isalpha('\n'));
//}