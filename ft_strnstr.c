/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:35:52 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/10/11 19:59:00 by gdel-cas         ###   ########.fr       */
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
	if (*hay == 0 || ft_strlen(need) > n)
		return (0);
	while ((char)hay[i] != '\0')
	{
		j = 0;
		while ((char)hay[i + j] == (char)need[j] && (i + j) < n)
		{
			if ((char)hay[i + j] == '\0' && (char)need[j] == '\0')
				return ((char *)hay + i);
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
    char    s1[] = "A";
    //char    s2[] = "cdjghyffdgfgfd";
    size_t  max = ft_strlen(s1) + 1;

    char    *i1 = strnstr(s1, s1, max);
    char    *i2 = ft_strnstr(s1, s1, max);


    printf("strnstr: %s\nft_strnstr: %s\n", i1,i2);
    return 0;
}
*/
