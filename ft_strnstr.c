/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:21:30 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/13 00:02:04 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	index;

	count = 0;
	index = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[count] != '\0' && count < len - 1)
	{
		while (haystack[count] == needle[index])
		{
			if (needle[index + 1] == '\0')
				return (&((char *)haystack)[count]);
			index++;
		}
		count++;
	}
	return (0);
}
