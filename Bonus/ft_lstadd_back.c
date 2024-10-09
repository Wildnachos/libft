/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:20:22 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/08 20:05:17 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*prev;
	t_list	*current;

	current = *lst;
	if (!*lst)
		*lst = new;
	else
	{
		while (current)
		{
			prev = current;
			current = current->next;
		}
		prev->next = new;
	}
}
