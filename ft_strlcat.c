/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:32:51 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/13 18:24:53 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	j = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = dstlen;
	if (size <= dstlen)
		return (size + srclen);
	while (src[j] && dstlen < (size - 1))
	{
		dst[dstlen] = src[j];
		dstlen++;
		j++;
	}
	dst[dstlen] = '\0';
	return (i + srclen);
}

//#include <bsd/string.h>
//int main(void)
//{
//	char str1[] = "abcde";
//	const char str2[] = "abc";
//    char str3[] = "abcde";
//	const char str4 [] = "abc";
//	printf("final string : %zu\n", ft_strlcat(str1, str2, 1));
//    printf("final string : %zu\n", strlcat(str3, str4, 1));
//}
