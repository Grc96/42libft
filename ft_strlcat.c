/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:48:20 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/25 19:21:42 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (dstsize >= 0)
	{	
		while(dst[i] != '\0')
			i++;
		while (src[y] != 0 && y < (dstsize - i - 1))
		{
			dst[i + y] = src[y];
			y++;
		}	
	}
return(i + y);
}
int	main()
{
	char	c[20] = "HOLA";
	char	b[] = "buenas";
	printf("%zu\n", strlcat(c, b, 11));
	//printf("%zu\n", ft_strlcat(c, b, 10i));
	printf("%s\n", c);
	return (0);
}
