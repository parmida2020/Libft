/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:24:40 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/24 17:26:29 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)((const unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
//int main (void)
//{
//    char str1[50] = "Hello Mida";
//    char *mtptr = (char *)ft_memchr(str1, 'e', 10);
//    char *ptr = (char *)memchr(str1, 'e', 10);
//    printf ("%s\n", ptr);
//    printf ("%s\n", mtptr);
//}
