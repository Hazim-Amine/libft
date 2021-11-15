/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:07:05 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/11 22:20:21 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

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

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
