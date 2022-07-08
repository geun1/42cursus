/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsong <gsong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:59:02 by gsong             #+#    #+#             */
/*   Updated: 2022/07/08 16:41:38 by gsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;
    while (i <= len)
    {
        c = (char)c;
        ((char *)b)[i] = c;
        i++;
    }
    return(b);
}
#include<stdio.h>
int main(){
    char* res;
    char a[10] = "asdfasdfdd";
    res = ft_memset(a,'z',4);
    printf("%s",res);
}