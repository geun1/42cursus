/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsong <gsong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:56:20 by gsong             #+#    #+#             */
/*   Updated: 2022/07/12 16:31:24 by gsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char	*dst, const	char	*src, size_t	dstsize)
{
	size_t	i;
	size_t	temp;

	i = 0;
	temp = ft_strlen(src);
	if (dstsize)
	{
		while (i < temp && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (temp);
}
