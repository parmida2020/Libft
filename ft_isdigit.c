/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:06:11 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/13 12:24:23 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
//int main()
//{
//	printf("%d\n", ft_isdigit('0'));
//	printf("%d\n", ft_isdigit('\n'));
//	printf("%d\n", ft_isdigit('b'));    
//	printf("%d\n", ft_isdigit(-128));
//}