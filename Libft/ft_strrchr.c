/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: song-geun-il <song-geun-il@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:00:24 by gsong             #+#    #+#             */
/*   Updated: 2022/07/10 18:48:18 by song-geun-i      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    while (i > 0)
    {
        if (s[i] == c)
            return (&s[i]);
        else
            i--;
    }
    return 0;
}
