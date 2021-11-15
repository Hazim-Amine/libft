/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:44:51 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/09 12:03:27 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		if (((char *)s)[count] == (char)c)
		{
			return (&((char *)s)[count]);
		}
		count--;
	}
	return (0);
}
