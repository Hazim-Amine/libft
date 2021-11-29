/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:08:22 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/22 19:18:17 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	count;
	size_t	index;
	size_t	res;

	index = ft_strlen(src);
	count = ft_strlen(dst);
	if (dstsize < count || dstsize == 0)
		return (index + dstsize);
	else
		res = index + count;
	index = 0;
	while (src[index] && count < dstsize - 1)
	{
		dst[count] = src[index];
		count++;
		index++;
	}
	dst[count] = '\0';
	return (res);
}
