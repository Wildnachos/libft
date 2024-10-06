/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:00:33 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:00:33 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*t_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
		str[i++] = '\0';
	return ;
}
