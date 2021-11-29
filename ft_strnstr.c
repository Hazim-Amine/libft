/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:21:30 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/22 16:34:28 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	index;

	count = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[count] != '\0' && count < len)
	{
		index = 0;
		while (haystack[count + index] == needle[index]
			&& (count + index) < len)
		{
			if (needle[index + 1] == '\0')
				return (&((char *)haystack)[count]);
			index++;
		}
		count++;
	}
	return (0);
}
