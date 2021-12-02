/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:02:53 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/29 22:24:35 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	count;

	count = 0;
	if ((char *)dst == NULL && (const char *)src == NULL)
	{
		return (NULL);
	}
	if (dst > src)
	{
		while (len != 0)
		{
			len--;
			((char *)dst)[len] = ((const char *)src)[len];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
