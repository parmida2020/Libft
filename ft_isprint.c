/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:39:49 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/13 13:52:27 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
//int main()
//{
//	printf("%d\n", ft_isprint('0'));
//	printf("%d\n", ft_isprint('\n'));
//	printf("%d\n", ft_isprint('b'));    
//	printf("%d\n", ft_isprint(-128));
//}