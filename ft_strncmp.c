/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:32:04 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/22 14:37:36 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[count] != '\0' && s2[count] != '\0'
		&& s1[count] == s2[count] && count < n - 1)
	{
		count++;
	}
	return (((unsigned char *)s1)[count] - ((unsigned char *)s2)[count]);
}
