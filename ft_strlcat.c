/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:48:20 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/28 16:20:53 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	if (dstsize > ft_strlen(dst))
	{	
		while (dst[i] != '\0')
			i++;
		while (src[j] != 0 && j < (dstsize- i - 1))
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (i  + ft_strlen(src));
}

/*int	main()
{
	char	c[10] = "Hola";
	char	b[] = "buenas";
	char	c1[10] = "Hola";
	char	b1[] = "buenas";
	
	printf("%zu\n", strlcat(c, b, 10));
	printf("%zu\n", ft_strlcat(c1, b1,10));
	printf("%s\n", c);
	return (0);
}*/
