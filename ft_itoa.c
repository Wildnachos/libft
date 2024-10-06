/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <marvin@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:53:43 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/06 16:58:42 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digs(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		dig;
	long	x;

	x = n;
	dig = digs(x);
	res = malloc(sizeof(char) * (dig + 1));
	if (!res)
		return (0);
	res[dig--] = 0;
	if (n == 0)
		res[0] = '0';
	if (x < 0)
	{
		res[0] = '-';
		x *= -1;
	}
	while (x > 0)
	{
		res[dig--] = (x % 10) + 48;
		x = x / 10;
	}
	return (res);
}
