/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:45:06 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/29 14:52:44 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t slen;
    size_t i;
    char *new;

    if (s == NULL)
        return(NULL);
    slen = ft_strlen(s);
    if (start >= slen)
        return(ft_strdup(""));
    new = malloc((len + 1) * sizeof(char));
    if (new == NULL)
        return (NULL);
    if (len > slen - start)
        len = slen - start;
    i = 0;
    while (i < len)
    {
        new[i] = s[start + i];
        i++;
    }
    return (new);
}
int main(void)
{
	char *str = ft_substr("hello world", 1, 4);
	printf("%s\n", str);
	free (str);
	return 0;
}
