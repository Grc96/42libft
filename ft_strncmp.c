/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:25:54 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/29 18:35:47 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	i;
	unsigned char	j;

	i = 0;
	j = 0;
	while (s[i] && s[j] && i < n && j < n)
	{
		s[i] = s[j];
		i++;
		j++;
	}

}

