/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: song-geun-il <song-geun-il@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:41:57 by song-geun-i       #+#    #+#             */
/*   Updated: 2022/07/18 15:36:45 by song-geun-i      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int sign;
    long long result;

    result = 0;
    sign = 1;
    while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' || *str == '\r' || *str == '\f')
        str++;
    if (*str == '-' || *str == '+')
        if (*str++ == '-')
            sign = -1;
    while (ft_isdigit(*str))
    {
        result *= 10;
        result += (*str - '0') * sign;
        str++;
    }
    return result;
}