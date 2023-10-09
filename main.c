/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:06:03 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/10/09 21:57:05 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


//substr
/*int	main()
{
	char	*s = "Hola Mundo!";
	char	*res;

	res = ft_substr(s, 4, 7);
	printf("%s\n", res);
	free(res);
	return (0);
}*/

//strjoin
/*int	main()
{
	char	*c  = "Hola";
	char	*b = " mundo!";
	char	*res;

	res = ft_strjoin(c, b);
	printf("%s\n", res);
	free(res);
	res = 0;
	return(0);
}*/

/*int	main()
{
	char	*c = "lorem \n ipsum \t dolor \n sit \t amet";
	char	*b = "te";

	printf("%s\n", ft_strtrim(c, b));
	return(0);
}*/



int	main()
{
	char	*a = "     ";
	char	b = ' ';
	ft_split(a, b);
	return (0);
}
