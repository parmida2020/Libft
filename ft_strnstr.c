/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 11:20:35 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/11 17:48:46 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lenlittle;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	lenlittle = ft_strlen((char *)little);
	while (big[i] && (i + lenlittle <= len))
	{
		if (ft_strncmp(&big[i], little, lenlittle) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
//#include <bsd/string.h>
//int main(void)
//{
//    char str[100] = "hello my name is mida";
//    char a[1] ="\0";
//    printf("%s\n", ft_strnstr(str, a, 10));

//    //if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15)))
//    //    return (0);
//    //else
//    //    return (str)

//    char s[100] = "hello my name is mida";
//    char ad[1] = "\0";
//    printf("%s\n", strnstr(s, ad, 10));
//}
// first you find the first letter,, start comparing the other
// letters in the word until the end

// you have to use the -lbsd flag on terminal as well