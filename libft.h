/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <gdel-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:54:30 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/27 17:41:03 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

extern int		ft_isalnum(int c);
extern int		ft_isalpha(int c);
extern int		ft_isascii(int c);
extern int		ft_isdigit(int c);
extern int		ft_isprint(int c);
extern size_t	ft_strlen(const char *s);
extern void		*ft_memset(void *b, int c, size_t n);
extern void		ft_bzero(void *s, size_t n);
extern void		*ft_memcpy(void *dst, const void *src, size_t n);
extern size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
extern size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
extern int		ft_tolower(int c);
int				ft_toupper(int c);
char			*ft_strchr(const char *s, int c);
int				ft_atoi(const char *str);
#endif
