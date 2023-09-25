/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:04:06 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/25 16:32:01 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
int	ft_atoi(const char *str)
{
	int	i;
	int	sig;
	int	res;

	i = 0;
	res = 0;
	sig = 1;
	if (str[i] == '\0')
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i]  == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sig);
}

int	main()
{
	char 	str[] = "Hola mundo";
	printf("%d\n", ft_atoi("-3435"));
	printf("%d\n", atoi("-3435"));
}
