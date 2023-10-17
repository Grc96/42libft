/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:26:16 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/10/17 16:59:26 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fin;
	int	i;

	if (!s || !f)
		return (NULL);
	fin = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!fin)
		return (NULL);
	ft_strlcpy(fin , s, ft_strlen(s) + 1);
	i = 0;
	while (fin[i] != '\0')
	{
		fin[i] = (*f)(i, fin[i]);
		i++;
	}
	return (fin);
}
