/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:21:36 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/20 15:48:14 by ahazim           ###   ########.fr       */
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
	if (str[count] == '-')
		plusmin = plusmin * -1;
	if (str[count] == '-' || str[count] == '+')
		count++;
	while (str[count] >= 48 && str[count] <= 57)
	{
		res = (res * 10) + str[count] - 48;
		count++;
	}
	return (res * plusmin);
}
