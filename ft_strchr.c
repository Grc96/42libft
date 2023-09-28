/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:46:58 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/28 16:55:53 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	if (s[i] == '\0')
		return(NULL);
	if (s[i] == (char)c)
		return(c);
}
int	main()
{
	char	c[10] = "hola";
	printf("%c\n", *ft_strchr(c[2], 10 ));
}
