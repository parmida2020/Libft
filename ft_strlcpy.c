/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:11:40 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/13 18:24:36 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
//#include <bsd/string.h>
//int main (void)
//{
//    char dst[100] = "hello ";
//    char src[100] = "World";
//    int result = ft_strlcpy(dst, src, 0);
//    printf("content : %d \n", result);
//    printf("Origina: %zu\n", strlcpy(dst, src, 10));
//}