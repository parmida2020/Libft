/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 11:20:35 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/15 17:20:15 by ppourraj         ###   ########.fr       */
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
	lenlittle = ft_strlen(little);
	while (big[i] && (i + lenlittle <= len))
	{
		if (ft_strncmp(&big[i], little, lenlittle) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
//#include <bsd/string.h>
//#include <stdio.h>
//int main(void)
//{
//    char str[100] = "hello my name is mida";
//    char little[5] ="my";
//    printf("%s\n", ft_strnstr(str, little, 12));
//    char s[100] = "hello my name is mida";
//    char lit[5] = "my";
//    printf("%s\n", strnstr(s, lit, 12));
//}