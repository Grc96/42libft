/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:04:52 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/10/25 12:47:55 by gdel-cas         ###   ########.fr       */
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
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	 }
	return(count);
}

static size_t	ft_strlon(char const *s, char c)
{
	size_t	v;

	v = 0;
	while (s && s[v] != '\0' && s[v] != c)
		v++;
	return(v);
}

void	ft_fr(char **x, size_t j)
{
	while (x)
	{
		free(x[j]);
		j--;
	}
	free(x);
}

char	**ft_split(char const *s, char c)
{
	char	**x;
	size_t	j;
	size_t	i;
	size_t	k;
	size_t	len;


	if (!s)
		return (NULL);
	k = ft_count(s, c);
	x = ft_calloc(k + 1, sizeof(char *));
	if (!x)
		return (NULL);
	j = 0;
	while (j < k)
	{
		i = 0;
		while (*s == c)
			s++;
		len = ft_strlon(s, c);
		x[j] = ft_calloc(len + 1, sizeof(char));
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
		s += i;
		j++;
	}
	return (x);
}
