/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:00:42 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/22 21:09:06 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	index;

	index = 0;
	if (s == '\0' || len < 0)
		return (NULL);
	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	sub = (char *)malloc (sizeof(char) *(len + 1));
	if (sub == NULL)
	{
		return (0);
	}
	while (start < ft_strlen(s) && index < len)
	{
		sub[index] = s[start];
		index++;
		start++;
	}
	sub[index] = '\0';
	return (sub);
}
