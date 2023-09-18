/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <gdel-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:54:30 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/18 18:35:20 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

extern int ft_isalnum(int c);
extern int ft_isalpha(int c);
extern int ft_isascii(int c);
extern int ft_isdigit(int c);
extern int ft_isprint(int c);
extern int ft_strlen(const char *s);
extern int ft_memset(void *b, int c, size_t n);
extern int ft_bzero(void *s, size_t n);
extern int ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
extern int
#endif
