/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:02:24 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/28 14:31:51 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"
#include<stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
/*int	main()
{
	char	c[30] = "Hola";
	char	b[] = "";
	size_t	f = 5;

	printf("%zu\n", ft_strlcpy(c, b, f));
	//printf("%zu\n", strlcat(c, b, f));
	printf("%s\n%s\n", c, b);
return(0);
}*/
