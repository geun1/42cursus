/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: song-geun-il <song-geun-il@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:46:17 by gsong             #+#    #+#             */
/*   Updated: 2022/07/10 19:07:47 by song-geun-i      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int isalnum(int c)
{
    if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
        return (1);
    else
        return (0);
}