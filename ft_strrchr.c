/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:01:38 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/30 13:22:10 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
