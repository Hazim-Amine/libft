/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:29:12 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/15 01:33:18 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	count;
	unsigned int	count1;

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
	