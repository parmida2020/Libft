/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:10:20 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/14 11:15:12 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, nmemb * size);
	return (tmp);
}

//int main (void)
//{
//    int *arr;
//    arr = ft_calloc(5, sizeof(int));
//    printf("%d\n",  arr[0]);
//    printf("%d\n",  arr[1]);
//    printf("%d\n",  arr[2]);
//    printf("%d\n",  arr[3]);
//    printf("%d\n",  arr[6]);
//    return (0);
//}