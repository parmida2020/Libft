/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:09:52 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/29 14:36:55 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
//int main (void)
//{
//    char *e = ft_strtrim("iiiiiiiiiikkkkii", "i");
//    printf("%s", e);
//    free(e);
//}

/* if the len we have to copy is greater than the length of the string
     * starting at index start, that means we have to stop after we read
     * the whole string and that the allocated size has not to be 
     * equal to the len received as parameter but only the size we will
     * copy plus one for the NUL-terminating character
     * this let's us only allocate memory that is really necessary
     */