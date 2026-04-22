/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:10:20 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/22 14:06:30 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    size_t  i;
    unsigned char *tmp;

    i = 0;
    tmp = malloc(nmemb * size);
    if (tmp = NULL)
        return (NULL);
    while (i < size * nmemb)
    {
        tmp[i] = 0;
        i++;
    }
    return (tmp);
}

//if (nmemb == 0 || size == 0)
//    return ();