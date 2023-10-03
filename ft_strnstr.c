/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:35:52 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/10/03 18:55:26 by gdel-cas         ###   ########.fr       */
/*   Updated: 2023/10/03 17:33:55 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((char)need[j] == '\0')
		return ((char *)hay);
	if (hay == 0 || ft_strlen(need) > n)
		return (0);
	while ((char)hay[i] != '\0')
	{
		j = 0;
		while ((char)hay[i + j] == (char)need[j] && i + j < n)
		{
			j++;
		}
		if ((char)need[j] == '\0')
			return ((char *)hay + i);
		i++;
	}
	return (0);
}

/*
int	main()
{
    char    s1[] = "aaabcabcd";
    char    s2[] = "cdjghyffdgfgfd";
    size_t  max = 3;

    char    *i1 = strnstr(s1, s2, max);
    char    *i2 = ft_strnstr(s1, s2, max);


    printf("strnstr: %s\nft_strnstr: %s\n", i1,i2);
    return 0;
}*/
