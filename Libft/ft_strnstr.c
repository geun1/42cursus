/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsong <gsong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 17:10:00 by gsong             #+#    #+#             */
/*   Updated: 2022/07/15 18:35:17 by gsong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	n = ft_strlen(needle);
	if (! *needle)
		return ((char *) haystack);
	while (*haystack && n <= len--)
	{
		if (*haystack == *needle && ! ft_memcmp(haystack, needle, n))
			return ((char *) haystack);
		haystack++;
	}
	return (NULL);
}

// len 길이 만큼 중에 haystack에 처음으로 등장하는 needle에 해당하는 문자열의 주소 반환
// 예외 처리 
// 1. needle이 null값이라면 -> 그냥 haystack 주소값 반환 
// 2. needle에 해당하는 문장열이 없다면 null 반환 