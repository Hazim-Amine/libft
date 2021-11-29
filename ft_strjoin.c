/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:59:21 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/22 21:22:13 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count;
	int		index;
	char	*cat;

	count = 0;
	index = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}
	cat = malloc((ft_strlen((char *)s1)) + (ft_strlen((char *)s2)) + 1);
	if (cat == NULL)
		return (NULL);
	while (s1[count] != '\0')
	{
		cat[count] = s1[count];
		count++;
	}
	while (s2[index] != '\0')
	{
		cat[count + index] = s2[index];
		index++;
	}
	cat[count + index] = '\0';
	return (cat);
}
