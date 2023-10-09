/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:03:23 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/10/05 19:45:57 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	size_t	l;

	if (!s)
		return (NULL);
	if ((s && !*s) || (s && !len) || start >= ft_strlen(s))
		return (ft_calloc(sizeof(char), 1));
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	c = ft_calloc(sizeof(char), len + 1);
	if (!c)
		return (NULL);
	l = 0;
	while (l < len)
		c[l++] = s[start++];
	return (c);
}
