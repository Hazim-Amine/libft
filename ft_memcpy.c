/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:27:41 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/28 20:06:43 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;
	size_t	count1;

	count = 0;
	count1 = 0;
	if (dst == NULL && src == NULL)
	{
		return (0);
	}
	while (count < n)
	{
		((unsigned char *)dst)[count] = ((unsigned char *)src)[count1];
		count++;
		count1++;
	}
	return (dst);
}
