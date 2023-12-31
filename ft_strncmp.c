/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:25:54 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/10/05 15:49:42 by gdel-cas         ###   ########.fr       */
/*   Updated: 2023/10/02 16:17:35 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"
#include<string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	i;
	unsigned char	j;
	unsigned char	*c;
	unsigned char	*b;

	i = 0;
	j = 0;
	c = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (i < n && j < n)
	{
		if (c[i] != b[j] || c[i] == '\0' || b[j] == '\0')
			return (c[i] - b[j]);
		i++;
		j++;
	}
	return (0);
}
