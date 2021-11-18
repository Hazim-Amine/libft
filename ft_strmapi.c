/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:29:10 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/18 20:30:54 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		count;
	char	*index;

	count = 0;
	if (s == NULL || f == NULL)
	{
		return (0);
	}
	index = (char *)malloc(ft_strlen(s) + 1);
	if (index == NULL)
	{
		return (NULL);
	}
	while (s[count])
	{
		index[count] = f(count, s[count]);
		count++;
	}
	index[count] = '\0';
	return (index);
}
