/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 11:20:35 by ppourraj          #+#    #+#             */
/*   Updated: 2026/04/17 18:40:48 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    if (*little == NULL)
        return (*big);
    if (*big)
}
int main(void)
{
    char str[100] = "hello my name is mida";
    char a[50] = "na";
    printf("%s", strnstr(str, a, 3));
}

// first you find the first letter,, start comparing the other
// letters in the word until the end
