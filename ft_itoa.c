/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:34:48 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/27 19:54:55 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int  len(int nbr)
{
    size_t  count;

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
char *ft_itoa(int n)
{
    int     nbr_len;
    int     i;
    char    *result;
    long    nb;

    nb = n;
    i = 0;
    nbr_len = len(n);
    result = malloc(nbr_len + 1);
    if (result == NULL)
        return (NULL);
    if (n == 0)
        return (ft_strdup("0"));
    while (nb)
    {
        result[i] = ((nb % 10) + '0');
    }
    
}

