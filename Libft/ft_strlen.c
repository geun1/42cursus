/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsong <gsong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:04:38 by gsong             #+#    #+#             */
/*   Updated: 2022/07/08 15:02:24 by gsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
size_t ft_strlen(char *s)
{
    int i;
    size_t count;
    while (s[i])
    {
        count++;
        i++;
    }
    return (count);
}