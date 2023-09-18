/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <gdel-cas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:05:59 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/18 18:00:02 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_isprint (int c)
{
	if (c >= 31 && c <= 127)
		return (1);
	else 
		return (0);
}

/*int	main()
{
	printf("%d\n", ft_isprint(31));
}*/
