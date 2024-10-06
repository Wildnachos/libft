/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <marvin@student.42lausanne.ch>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:53:32 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/06 12:53:32 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	if_in(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	totlen;

	start = 0;
	totlen = ft_strlen(s1) - 1;
	if (s1[0] == 0)
		return (ft_strdup(s1));
	while (s1[start] && if_in(set, s1[start]))
		start++;
	while (totlen >= start && if_in(set, s1[totlen]))
		totlen--;
	totlen -= start;
	return (ft_substr(s1, start, totlen + 1));
}
