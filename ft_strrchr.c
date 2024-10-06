/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <marvin@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:53:17 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/06 17:03:02 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter])
		counter ++;
	while (counter > 0)
	{
		if (s[counter] == (unsigned char)c)
			return ((char *) &(s[counter]));
		counter--;
	}
	if (s[counter] == (unsigned char)c)
		return ((char *) &(s[counter]));
	return (0);
}
