/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:54:17 by ahazim            #+#    #+#             */
/*   Updated: 2021/12/07 19:11:18 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(char *s, char c)
{
	int	count;
	int	words;

	count = 0;
	words = 0;
	while (s[count] == c && s[count])
		count++;
	while (s[count])
	{
		if (count == 0 || s[count - 1] == c)
		{
			if (s[count] != c && s[count] != '\0')
				words++;
		}
		count++;
	}
	return (words);
}

static void	move_word(char *from, char *to, int start, int j)
{
	int	index;

	index = 0;
	while (j > 0)
	{
		to[index] = from[start];
		index++;
		start++;
		j--;
	}
	to[index] = '\0';
}

static void	ft_free(char **p, int count)
{
	while (count >= 0)
		free(p[--count]);
	free(p);
}

static void	ft_lastpart(char **p, char const *s, char c)
{
	int		count;
	int		len;
	int		index;

	count = 0;
	index = 0;
	while (s[count])
	{
		len = 0;
		while (s[count] == c)
			count++;
		while (s[count + len] != c && s[count + len] != '\0')
			len++;
		if (len != 0)
		{
			p[index] = (char *)malloc(len + 1);
			if (p[index] == NULL)
				ft_free(p, index);
			move_word((char *)s, p[index], count, len);
			index++;
		}
		count = count + len;
	}
}

char	**ft_split(char const *s, char c)
{
	int		len;
	char	**p;

	if (!s)
		return (NULL);
	len = words_count((char *)s, c);
	p = (char **)malloc(sizeof(char *) * (words_count((char *)s, c) + 1));
	if (p == NULL)
		return (NULL);
	ft_lastpart(p, s, c);
	p[len] = NULL;
	return (p);
}
