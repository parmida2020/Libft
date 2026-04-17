/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:31:16 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/16 10:34:09 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*#include <stdio.h>
int main(void)
{
	char c = '0';
	printf("%d\n", ft_isalpha(c));
	char a = 'a';
	printf("%d\n", ft_isalpha(a));
	char b = 'A';
	printf("%d\n", ft_isalpha(b));
	char r = '&';
	printf("%d", ft_isalpha(r));
}*/