/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:22:45 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/13 12:28:58 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
//int main(void)
//{
//	printf("%d\n", ft_isascii('0'));
//	printf("%d\n", ft_isascii(100000));
//	printf("%d\n", ft_isascii('A'));
//	printf("%d", ft_isascii('\n'));
//}