/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsong <gsong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:54:48 by song-geun-i       #+#    #+#             */
/*   Updated: 2022/07/12 16:36:03 by gsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include	<stdlib.h>
# include	<unistd.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void	*s, size_t n);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memcpy(void	*dst, void *src, size_t n);
size_t	ft_strlcpy(char	*dst, const	char	*src, size_t	dstsize);
void	*ft_memmove(void	*dst, const void	*src, size_t	len);
#endif