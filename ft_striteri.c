/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:15:41 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/20 15:08:03 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		count;

	count = 0;
	if (s)
	{
		while (s[count])
		{
			f(count, &s[count]);
			count++;
		}
	}
}
