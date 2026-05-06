/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_again.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppourraj <ppourraj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 11:11:00 by ppourraj          #+#    #+#             */
/*   Updated: 2026/05/06 17:39:20 by ppourraj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	arraylen(char const *s, char c)
{
	size_t	count;
	size_t	i;

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
		i++;
	}
	return (count);
}
int wordlen(char const *s, char c)
{
	size_t i;
	
	while (s[i] && s[i] != c)
	{
		
	}
}
char **ft_split(char const *s, char c)
{
	char **result;
	char *
	
	result = malloc(sizeof (char *) * (arraylen(s, c) + 1));
	if (result == NULL)
		return (NULL);
	
	return (result);
}
int main(void)
{
	char *s = "";
	printf("%zu\n", arraylen(s, ' '));
}