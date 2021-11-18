/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:32:04 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/18 19:56:11 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long int	count;

	count = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[count] != '\0' && s2[count] != '\0'
		&& s1[count] == s2[count] && count < n - 1)
	{
		count++;
	}
	return (((unsigned char *)s1)[count] - ((unsigned char *)s2)[count]);
}

// int main()
// {
// 	const char *c= strdup("amine");
// 	const char *s = strdup("AMINE");
// 	printf("%d", ft_strncmp(c, s, 5));
// }02
