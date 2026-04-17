/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:11:57 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/17 16:01:52 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*#include <stdio.h>
int main(void)
{
	char c = 'a';
	printf("%d\n", ft_isalnum(c));
	char a = 'S';
	printf("%d\n", ft_isalnum(a));
	char r = '7';
	printf("%d\n", ft_isalnum(r));
	char u = '\t';
	printf("%d\n", ft_isalnum(u));
}*/