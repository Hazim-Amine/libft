/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:48:59 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/29 22:55:05 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;
	char	*cpy;

	cpy = 0;
	start = 0;
	if (s == NULL)
		return (NULL);
	if (s != NULL && set != NULL)
	{
		end = ft_strlen(s);
		while (s[start] && ft_strchr(set, s[start]))
			start++;
		while (s[end - 1] && ft_strrchr(set, s[end - 1]) && end > start)
			end--;
		cpy = (char *)malloc (sizeof(char) * (end - start + 1));
		if (cpy)
			ft_strlcpy(cpy, &s[start], end - start + 1);
	}
	return (cpy);
}