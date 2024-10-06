/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <marvin@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:21:46 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/06 14:34:06 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	*str1;

	i = -1;
	str = dest;
	str1 = src;
	if (!dest && !src)
		return (dest);
	if (dest < src)
	{
		while (++i < n)
			str[i] = str1[i];
	}
	else
	{
		while (n-- > 0)
			str[n] = str1[n];
	}
	return (dest);
}
