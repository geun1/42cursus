/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsong <gsong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:34:54 by gsong             #+#    #+#             */
/*   Updated: 2022/07/12 17:09:37 by gsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	size_t	i;

	i = -1;
	if (dst == src)
		return (dst);
	while (++i < len)
		)dst = src;
	return (dst);
}


	src =	ㅁㅁㅁㅁ
			0 1 2 3
	dest = 	ㅁㅁㅁㅁ
			 0 1 2

	memcpy()

			ㅁㅁㅁㅁ
			 0 1 2 

	dest = src + 1
	 if (src < dest)

	 1. idx = strlen(src)

	 while (idx --)
	  dest[] = src[];