/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:01:11 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:04:40 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		counter;
	const char	*cc;

	cc = s;
	counter = 0;
	while (cc[counter] && counter < n)
	{
		if (cc[counter] == c)
			return ((void *) &(cc[counter]));
		counter ++;
	}
	if (cc[counter] == c)
		return ((void *) &(cc[counter]));
	return (0);
}
