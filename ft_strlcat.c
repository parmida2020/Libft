/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:32:51 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/27 17:56:06 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_s;
	size_t	len_d;
	size_t	i;

	len_s = ft_strlen((char *)src);
	len_d = ft_strlen(dst);
	i = 0;
	if (len_d >= size)
		return (len_d + len_s);
	while (src[i] && (len_d + i) < (size - 1))
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}
//int main(void)
//{
//	char str1[40] = "ASDF";
//	const char str2[30] = "PO";
//	printf("final string : %zu", ft_strlcat(str1, str2, 2));
//}
