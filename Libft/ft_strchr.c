/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsong <gsong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:36:48 by gsong             #+#    #+#             */
/*   Updated: 2022/07/08 17:57:42 by gsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int i;
    
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (&s[i]);
        else
            i++;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    printf("%s",ft_strchr("abcdefg",'e'));
}