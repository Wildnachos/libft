/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <marvin@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:26:33 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/06 15:30:23 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				counter;
	const unsigned char	*cc;

	cc = s;
	counter = 0;
	while (counter < n)
	{
		if (cc[counter] == (unsigned char) c)
			return ((void *) &(cc[counter]));
		counter ++;
	}
	return (0);
}
