/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:04:52 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/10/11 19:27:55 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_count(char const	*s, char c)
{
	 int i;
	 int count;

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

size_t	ft_strlon(char *s, char c)
{
	size_t	v;

	v = 0;
	while (s[v] != '\0' && s[v] != c)
		v++;
	return(v);
}

char	**ft_split(char const *s, char c)
{
	char	**x;
	size_t	j;
	size_t	i;
	
	j = 0;
	x = ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!x)
		return (NULL);
	while (j < ft_count(s, c))
	{
		i = 0;
		while (s[i] == c)
		{
			i++;
		}		
		while(s[i] != c)
			x[j][i] = s[i]
		//	s[j] == x[0][0];

	}
	return (0);
}

