/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:04:52 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/10/13 19:23:27 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static size_t	ft_count(char const	*s, char c)
{
	 int i;
	 size_t	count;

	 i = 0;
	 count = 0;
	 while(s[i] != '\0')
	 {	
	
	 	if (s[i] != c)
		{	
			count++;
			while (s[i] != c)
				i++;
		}
		i++;
	 }
	return(count);
}

static size_t	ft_strlon(char *s, char c)
{
	size_t	v;

	v = 0;
	while (s[v] != '\0' && s[v] != c)
		v++;
	return(v);
}

void	ft_fr(char **x, size_t j)
{
	while (x)
	{
		free (x[j]);
		j--;
	}
	free(x);
}

char	**ft_split(char const *s, char c)
{
	char	**x;
	size_t	j;
	size_t	i;

	x = ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!x)
		return (NULL);
	j = 0;
	while (j < ft_count(s, c))
	{
		i = 0;
		x[j] = ft_calloc(ft_strlon((char *)s, c) + 1, sizeof(char));
		if (!x[j])
		{
			ft_fr(x, j - 1);
			return (NULL);
		}
		while (s[i] != c && s[i] != '\0')
		{
			x[j][i] = s[i];
			i++;
		}
		s++;
		s += i;
		while (*s == c)
			s++;
		j++;
	}
	return (x);
}
