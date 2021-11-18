/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:40:15 by ahazim            #+#    #+#             */
/*   Updated: 2021/11/18 20:15:49 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	num = (unsigned int)n;
	if (num < 0)
	{
		ft_putchar_fd ('-', fd);
		num = -num;
		ft_putnbr_fd (num, fd);
	}
	else if (num < 10)
	{
		ft_putchar_fd (num + 48, fd);
	}
	else
	{
		ft_putnbr_fd (num / 10, fd);
		ft_putnbr_fd (num % 10, fd);
	}
}
