/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <marvin@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:07:51 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/06 17:09:20 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter])
	{
		if (s[counter] == (unsigned char)c)
			return ((char *) &(s[counter]));
		counter ++;
	}
	if (s[counter] == (unsigned char)c)
		return ((char *) &(s[counter]));
	return (0);
}
