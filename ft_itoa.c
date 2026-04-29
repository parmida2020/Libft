/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:34:48 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/29 09:57:20 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		nbr_len;
	char	*result;
	long	nb;

	nb = n;
	nbr_len = len(n);
	result = malloc(nbr_len + 1);
	if (result == NULL)
		return (NULL);
	result[nbr_len] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (n == 0)
		result[0] = '0';
	while (nb > 0)
	{
		result[nbr_len--] = ((nb % 10) + '0');
		nb = nb / 10;
	}
	return (result);
}
//int main (void)
//{
//	int s = -2147483648;
//	printf("%s", ft_itoa(s));
//}
