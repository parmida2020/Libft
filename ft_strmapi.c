/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 17:34:52 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/24 18:43:54 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	char *new = malloc(ft_strlen(s) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while(s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

//char	ft_toup(unsigned int c, char a)
//{
//	(void)c;
//	if (a >= 'a' && a <= 'z')
//		return (a - ('a' - 'A'));
//	return (a);
//}
//int main(void)
//{
//	char *str = "abcde";
//	char *str2 = ft_strmapi(str, *ft_toup);
//	printf("%s", str2);
//}
