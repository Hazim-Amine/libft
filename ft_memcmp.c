/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:23:04 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/09 14:56:55 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
	{
		return (0);
	}
	while (((unsigned char *)s1)[count] == ((unsigned char *)s2)[count]
		&& count < n - 1)
	{
		count++;
	}
	return (((unsigned char *)s1)[count] - ((unsigned char *)s2)[count]);
}
