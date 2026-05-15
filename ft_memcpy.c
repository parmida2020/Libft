/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 19:15:30 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/15 18:00:31 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
//#include <stdio.h>
//int main(void)
//{
//	char str1[100] = "Ola tudo bem. ";
//	char str2[60] = "Sim ";
//	ft_memcpy(str2, str1, 40);
//	printf("Result: %s\n", str2);
//	return (0);
//}
