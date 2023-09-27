/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <gdel-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:15:39 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/27 17:24:40 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n-- > 0)
		*(ptr++) = 0;
}
