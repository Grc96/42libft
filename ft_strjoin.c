/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:23:46 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/10/07 01:13:33 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new;

	new = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (!new)
		return (NULL);
	if (!s1  || !s2)
		return (0);
	i = 0;
	while (s1[i] != 0)
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
		new[i++] = s2[j++];
	return (new);
}
