/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:15:50 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/22 21:41:43 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (((char *)s)[count] != '\0')
	{
		if (((char *)s)[count] == (char)c)
		{
			return (&((char *)s)[count]);
		}
		count++;
	}
	if (c == '\0' && s[count] == '\0')
	{
		return (&((char *)s)[count]);
	}
	return (0);
}
