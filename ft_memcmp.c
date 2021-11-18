/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:23:04 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/18 18:06:13 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

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
