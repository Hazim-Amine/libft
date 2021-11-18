/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:02:53 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/18 20:46:06 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	count;

	count = 0;
	if ((char *)dst == NULL && (const char *)src == NULL)
	{
		return (0);
	}
	if (dst > src)
	{
		while (len)
		{
			len--;
			((char *)dst)[len] = ((const char *)src)[len];
		}
	}
	else
	{
		while (count < len - 1)
		{
			(((char *)dst)[count]) = (((const char *)src)[count]);
			count++;
		}
	}
	return (dst);
}
