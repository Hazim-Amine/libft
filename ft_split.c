/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:54:17 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/21 23:23:23 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static ft_free(char *arr)
{
	int	count;

	count = 0;
	while (arr[count])
	{
		free(arr[count]);
		count++;
	}
	free(arr);
}
static void	ft_clear(char	*str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		free(str[count]);
		count++;
	}
	free(str[count]);
}

static int	count_words(char *str, char c)
{
	int	count;
	int	index;

	count = 0;
	index = 0;
	while (str[count] == c  && str[count] != '\0')
	{
		count++;
	}
	while (str[count] != '\0')
	{
		if (count == 0 || str[count - 1] == c)
		{
			if (str[count] != c && str[count] != '\0')
			{
				index++;
			}
		}
		count++;
	}
	return (index);
}

static void	ft_move(char *from, char *to, int start, int len)
{
	int count;

	count = 0;
	while (index > 0)
	{
		to[count] = from[start];
		count++;
		start++;
		len--;
	}
	to[count] = '\0'
}

static void	lastpart(char	)