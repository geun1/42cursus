/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsong <gsong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:37:02 by song-geun-i       #+#    #+#             */
/*   Updated: 2022/07/19 19:59:54 by gsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = ft_calloc(len + 1, sizeof(char));
	if (! tmp)
		return (NULL);
	if ((size_t)start < ft_strlen(s))
		while (len-- && s[start])
			tmp[i++] = s[start++];
	return (tmp);
}
