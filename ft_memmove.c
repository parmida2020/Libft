/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 10:00:50 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/20 19:08:28 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dest);
}
//int main(void)
//{
//	char buf1[20] = "abcdef";
//    char buf2[20] = "abcdef";
//    ft_memmove(buf1 + 2, buf1, 4);
//    memmove(buf2 + 2, buf2, 4);
//    printf("ft_memmove: %s\n", buf1);
//    printf("memmove   : %s\n", buf2);

//    return 0;
//}
// handle overlapping memory safely 
// if bothe src and dest are null we just return null