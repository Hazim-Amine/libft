/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:21:36 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/08 12:47:49 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	count;
	int	plusmin;
	int	res;

	count = 0;
	plusmin = 1;
	res = 0;
	while (str[count] == ' ' || str[count] == '\n'
		|| str[count] == '\t'
		|| str[count] == '\v' || str[count] == '\f'
		|| str[count] == '\r')
		count++;
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			plusmin = plusmin * -1;
		count++;
	}
	while (str[count] >= 48 && str[count] <= 57)
	{
		res = (res * 10) + str[count] - 48;
		count++;
	}
	return (res * plusmin);
}
