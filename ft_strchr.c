/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 16:37:02 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/16 18:25:22 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    if (s[i] == c)
        return ((char *)&s[i]);
    return (0);
}
int main(void)
{
    char str[30] = "abcdefghijklmnop";
    printf("%s", ft_strchr(str, 'h'));
}
