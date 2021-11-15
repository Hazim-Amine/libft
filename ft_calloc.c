/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:52:53 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/11 22:22:21 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

static void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *)b)[count] = (char)c;
		count++;
	}
	return ((void *)b);
}

static void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*index;

	index = malloc(count * size);
	if (index == 0)
	{
		return (0);
	}
	ft_bzero(index, count * size);
	return (index);
}
