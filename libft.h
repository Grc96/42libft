/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdel-cas <gdel-cas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:54:30 by gdel-cas          #+#    #+#             */
/*   Updated: 2023/09/13 16:03:43 by gdel-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
#include <unistd.h>

extern int ft_isalnum(int c);
extern int ft_isalpha(int c);
extern int ft_isascii(int c);
extern int ft_isdigit(int c);
extern int ft_isprint(int c);
extern int ft_strlen(const char *s);
extern int ft_memset(void *b, int c, size_t n);
extern int ft_bzero(void *s, size_t n);




