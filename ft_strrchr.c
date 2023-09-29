/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:01:38 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/29 17:24:55 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "libft.h"
#include<stdio.h>
#include "ft_strlen.c"

char	*ft_strrchr(const char *s, int c)
{
	size_t	l;

	l = ft_strlen(s);
	while (l > 0)
	{
		if (s[l] == c)
		return ((char *)&s[l]);
		l--;
	}
	return (NULL);
}
/*int	main()
{
	char c[10] = "holahola";
	printf("%s\n", ft_strrchr (c, 'l'));
	return (0);
}*/
