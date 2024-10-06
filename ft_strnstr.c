/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <marvin@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:57:34 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/06 13:22:45 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (big[x] && x < len)
	{
		y = 0;
		while (big[x + y] == little[y] && little[y] != '\0' && x + y < len)
			y++;
		if (little[y] == '\0')
			return ((char *)(big + x));
		x++;
	}
	return (0);
}
