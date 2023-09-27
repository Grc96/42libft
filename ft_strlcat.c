/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:48:20 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/27 19:12:37 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (dstsize >= 0)
	{	
		while (dst[i] != '\0')
			i++;
		while (src[y] != 0 && y < (dstsize - i - 1))
		{
			dst[i + y] = src[y];
			y++;
		}	
	}
	return (i + y);
}
/*
int	main()
{
	char	c[11] = "Hola";
	char	b[] = "buenas";
	char	c1[11] = "Hola";
	char	b1[] = "buenas";
	
	printf("%zu\n", strlcat(c, b, 11));
	printf("%zu\n", ft_strlcat(c1, b1, 11));
	printf("%s\n", c);
	return (0);
}*/
