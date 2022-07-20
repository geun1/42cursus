/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: song-geun-il <song-geun-il@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:49:57 by song-geun-i       #+#    #+#             */
/*   Updated: 2022/07/20 18:18:06 by song-geun-i      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *result;
    int i;

    i = 0;
    result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!result)
        return (NULL);
    while (s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[i] = 0;
    return (result);
}