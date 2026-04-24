/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:10:20 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/24 16:46:28 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	tmp = malloc(nmemb * size);
	if (tmp == NULL)
		return (NULL);
	while (i < size * nmemb)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
//int main (void)
//{
//    void *a = ft_calloc(SIZE_MAX, SIZE_MAX);
//    void *b = calloc(SIZE_MAX, SIZE_MAX);

//    printf("ft_calloc: %p\n", a);
//    printf("calloc   : %p\n", b);

//    if (a == NULL && b == NULL)
//        printf(" Both returned NULL\n");
//    else if (a == NULL && b != NULL)
//        printf(" Your ft_calloc is correct, libc is weird (rare)\n");
//    else if (a != NULL && b == NULL)
//        printf(" Your ft_calloc is WRONG (missing overflow check)\n");
//    else
//        printf(" Both failed to detect overflow\n");
//}
