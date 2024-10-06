/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:03:01 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:03:01 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int nmemb, size_t size)
{
	char	*result;
	int		i;

	i = 0;
	if (!nmemb || !size)
		return (0);
	result = malloc(size * nmemb);
	if (!result)
		return (0);
	while (i < (size * nmemb))
		result[i++] = 0;
	return (result);
}
