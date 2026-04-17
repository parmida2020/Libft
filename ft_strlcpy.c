/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:11:40 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/17 19:34:19 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (size > 0)
    {
        while (src[i] && i < (size - 1))
        {
            dst[i] == src[i];
            i++;
        }
        dst = '\0';
    }
    return (ft_strlen(src));
}

int main (void)
{
    char dst[100] = "wsdfghjdm";
    char src[100] = "yde5yc";
    int result = ft_strlcpy(dst, src, 0);
    
    printf("content : %d \n", result);
    printf("Origina: %d\n", strlcpy(dst, src, 10));
}

//when you want to compile the code,
//first compile ft_strlen then ft_strlcpy


	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));