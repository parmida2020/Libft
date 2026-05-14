/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:50:26 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/14 11:51:55 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = malloc(sizeof (char ) * (ft_strlen(s) + 1));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s, (ft_strlen(s) + 1));
	return (dup);
}

// int main()
// {
//    char source[] = "HELLO WORLD !!!!\n";
//    char *dest = ft_strdup(source);
//    printf("%s", dest);
// }