/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 14:38:31 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/15 16:15:16 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
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

static size_t	lettercount(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	counter = 0;
	i = 0;
	while (s[i] && s[i] != c)
	{
		counter++;
		i++;
	}
	return (counter);
}

static void	free_strings(char **s, size_t count)
{
	while (count-- > 0)
		free(s[count]);
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	index;

	if (!s)
		return (NULL);
	index = 0;
	i = 0;
	result = malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		result[index] = ft_substr(s, i, lettercount(&s[i], c));
		if (!result[index])
			return (free_strings(result, index), NULL);
		i = i + lettercount(&s[i], c);
		index++;
	}
	result[index] = NULL;
	return (result);
}
//#include <stdio.h>
//int main ()
//{
//    char **array;
//    size_t i;
//    array = ft_split("  hello w  orl  d ", ' ');
//    i = 0;
//    while (array[i])
//    {
//        printf("%s", array[i]);
//        i++;
//    }
//    free (array);
//}
