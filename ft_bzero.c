/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:35:15 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/14 15:17:57 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, 0, n);
}

// int main(void)
// {
//    int arr[5] = {1, 2, 3, 4, 5};
//    int i = 0;
//    while (i < 5)
//    {
//        printf("%d\n", arr[i]);
//        i++;
//    }
//    ft_bzero(arr, 5 * sizeof(int));
//    i = 0;
//    while (i < 5)
//    {
//        printf("%d\n", arr[i]);
//        i++;
//    }
//    return (0);
// }