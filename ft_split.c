/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:04:52 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/10/09 21:56:22 by gdel-cas         ###   ########.fr       */
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
	
	x = ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!x)
		return (NULL);
	while (j < ft_count(s, c))
	{
		
		while (s[j] == c)
		{
			j++;
		}		
		while(s[j] != c)

			s[j] == x[0][0];
	}
	return (0);
}

