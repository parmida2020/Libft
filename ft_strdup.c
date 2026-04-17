/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:50:26 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/17 16:04:07 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = malloc((ft_strlen(s) + 1));
	if (dup == NULL)
		return (NULL);
	return (ft_strcpy(dup, s));
}

//#include <stdio.h>
//int main()
//{
//    char source[] = "HELLO WORLD !!!!\n";
//    char *dest = ft_strdup(source);
//    printf("%s", dest);
//}
