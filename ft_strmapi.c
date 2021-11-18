/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:58:18 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/17 19:41:40 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    int     len;
    int     count;
    char    *index;

    count = 0;
    len = ft_strlen(s);
    if (s == NULL || f == NULL)
    {
        return (0);
    }
    index = malloc(sizeof(char) * (len + 1));
    if (index == NULL)
    {
        return NULL;
    }
    while (count < len)
    {
        index[count] = f(count, s[count]);
        count++;
    }
    index[count] = '\0';
    return (index);
}