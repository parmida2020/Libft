/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 14:38:31 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/06 12:57:57 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t wordcount(char const *s, char c)
{
    size_t i;
    size_t count;

    i = 0;
    count = 0;
    
    while(s[i] && s[i] == c)
        i++;
    while(s[i])
    {
        if(s[i] != c)
        {
            count++;
            while (s[i] && s[i] != c)
            i++;
        }
        else
            i++;
    }
    return (count);
}
static size_t lettercount(char const *s, char c)
{
    size_t i;
    size_t counter;
    
    counter = 0;
    i = 0;
    
    while(s[i] && s[i] != c)
    {
       counter ++;
        i++;
    }
    return counter;
}
static void free_strings(char **s, int i)
{
    while(i >= 0)
    {
        free(s[i]);
        i--;
    }
    free(s);
}

char **ft_split(char const *s, char c)
{
    char **result;
    size_t i;
    size_t index;
    size_t len;

    index = 0;
    i = 0;
    len = 0;
    result = malloc(sizeof (char*) * (wordcount(s ,c) + 1));
    if (!result)
        return (NULL); 
    while(s[i])
    {
        while (s[i] && s[i] == c)
        i++;
        len = lettercount(&s[i], c); 
        result[index] = ft_substr(s, i, len);
        if (!result[index])
            return(free_strings(result, index), NULL);
        i = i + len; 
        index++;
    }
    result[index] = NULL;
    return (result);
}
int main()
{
    char const s[] = "there is a ball";
    char c = ' ';
    size_t i = 0;
    char **new = ft_split(s, c);
    while(new[i])
    {
        printf("%s", new[i]);
        i++;
    }
    free_strings(new, i);
}
 