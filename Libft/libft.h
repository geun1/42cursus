/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: song-geun-il <song-geun-il@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:54:48 by song-geun-i       #+#    #+#             */
/*   Updated: 2022/07/10 19:07:40 by song-geun-i      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memset(void *s, int c, size_t n);
char *ft_strchr(const char *s, int c);
size_t ft_strlen(const char *s);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif