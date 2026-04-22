/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 11:20:35 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/21 20:08:36 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[i + j] == '\0')
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (0);
}
//#include <bsd/string.h>
//int main(void)
//{
//    char str[100] = "hello my name is mida";
//    char a[50] = "na";
//    printf("%s\n", ft_strnstr(str, a, 10));

//    const char *largestring = "Foo Bar Baz";
//    const char *smallstring = "Bar";
//    printf("%s\n", strnstr(largestring, smallstring, 8));
//}
// first you find the first letter,, start comparing the other
// letters in the word until the end

// you have to use the -lbsd flag on terminal as well
