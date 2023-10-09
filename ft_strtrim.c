/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 01:17:48 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/10/09 19:03:42 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*c;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i])) 
	{	
 		i++;
	}
	j = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[j - 1]))
	{
		j--;
	}
	c = ft_calloc((j - i + 1), sizeof(char));
	if (!c)
		return (NULL);
	if (c)
	{
		ft_strlcpy(c, &s1[i], (j + 1) - i);
	}
	return (c);
}
