/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <marvin@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:04:13 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/06 17:04:17 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*str;
	const unsigned char	*str1;

	i = 0;
	if (!dest && !src)
		return (dest);
	str = dest;
	str1 = src;
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	return (dest);
}
