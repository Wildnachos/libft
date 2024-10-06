/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <marvin@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:52:14 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/06 12:52:14 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int			size;
	int			i;
	char		*result;

	i = 0;
	size = ft_strlen(s);
	if (size == 0)
	{
		result = malloc(1);
		result[0] = 0;
		return (result);
	}
	result = malloc(size + 1);
	if (!result)
		return (0);
	while (i < size)
	{
		result[i] = s[i];
		i++;
	}
	result[i++] = 0;
	return (result);
}
