/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:35:43 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/19 16:15:06 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
return (dst)
}

