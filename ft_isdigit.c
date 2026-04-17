/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:06:11 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/17 16:02:21 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*#include <stdio.h>
int main()
{
	char a = '0';
	printf("%d\n", ft_isdigit(a));
	char b = '&';
	printf("%d\n", ft_isdigit(b));
	char c = 'a';
	printf("%d\n", ft_isdigit(c));
	char d = 'M';
	printf("%d\n", ft_isdigit(d));
}*/