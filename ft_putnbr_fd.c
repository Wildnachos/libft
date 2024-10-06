/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <marvin@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:55:45 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/06 12:55:45 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	result;

	if (n < 0)
	{
		result = '-';
		write(fd, &result, 1);
		n *= -1;
	}
	if (n == -2147483648)
	{
		result = 2 + '0';
		write(fd, &result, 1);
		n -= 2000000000;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		result = n + '0';
		write(fd, &result, 1);
	}
}
