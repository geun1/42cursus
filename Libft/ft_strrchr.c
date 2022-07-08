/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsong <gsong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:00:24 by gsong             #+#    #+#             */
/*   Updated: 2022/07/08 18:07:33 by gsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// #include<stdio.h>
// int main()
// {
//     printf("%s",ft_strrchr("abcdefabcdbbbaef",'a'));
// }
