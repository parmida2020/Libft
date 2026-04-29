/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 10:08:15 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/29 11:31:21 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
//void vowels_to_(unsigned int a, char *s)
//{
//    (void) a;
//    if (*s == 'a' || *s == 'o' || *s == 'u' || *s == 'i'
//    || *s == 'e')
//    {
//        *s = '_';
//    }
//}
//int main (void)
//{
//    char *str = NULL;
//    printf("Before : %s\n", str);
//    ft_striteri(str, vowels_to_);
//    printf("After : %s\n", str);

//    char s[] = "Hello Mida";
//    printf("Before : %s\n", s);
//    ft_striteri(s, vowels_to_);
//    printf("After : %s\n", s);
//}