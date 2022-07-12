/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsong <gsong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:18:30 by gsong             #+#    #+#             */
/*   Updated: 2022/07/12 16:20:15 by gsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void	*dst, void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (dst == src)
		return (dst);
	while (++i < n)
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
