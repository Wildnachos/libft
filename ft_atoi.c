/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:00:39 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:00:39 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	neg;
	int	result;

	result = 0;
	neg = 1;
	i = 0;
	if (nptr == 0 || nptr[0] == 0)
		return (result);
	while (wspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
		neg = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result += (nptr[i++] - '0');
	}
	return (result * neg);
}
