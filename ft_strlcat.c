/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:08:22 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/12 23:58:42 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	unsigned int	count;
	unsigned int	index;
	unsigned int	res;

	count = 0;
	index = 0;
	res = 0;
	while (dst[count] != '\0')
		count++;
	while (src[res] != '\0')
		res++;
	if (dstsize <= count)
		res = res + dstsize;
	else
		res = res + count;
	while (src[index] != '\0' && count < (dstsize - 1) && dstsize != 0)
	{
		dst[count] = src[index];
		count ++;
		index++;
	}
	dst[count] = '\0';
	return (res);
}
