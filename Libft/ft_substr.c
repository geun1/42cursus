/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: song-geun-il <song-geun-il@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:37:02 by song-geun-i       #+#    #+#             */
/*   Updated: 2022/07/18 15:47:49 by song-geun-i      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *tmp;
    int i;

    i = 0;
    tmp = malloc(len + 1);
    if (!tmp)
        return 0;
    if (start >= ft_strlen(s))
        return (NULL);
    while (len--)
        tmp[i++] = s[start++];
    tmp[i] = '\0';
    return (tmp);
}