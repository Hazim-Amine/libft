/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:49:47 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/18 18:06:38 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*string;
	int		count;

	count = 0;
	string = malloc (ft_strlen((char *)s1) + 1);
	if (string == NULL)
		return (0);
	while (s1[count] != '\0')
	{
		string[count] = s1[count];
		count++;
	}
	string[count] = '\0';
	return (string);
}
