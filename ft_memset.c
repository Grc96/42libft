/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <gdel-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:26:46 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/12 17:55:34 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *b, int c, size_t n)
{
    int i;
    unsigned char *ptr;
    
    i = 0;
    ptr = (unsigned char *)b;
    while (i < n)
    {
        ptr [i] = (unsigned char)c;
        i++;
    }
    return (b);   
} 
