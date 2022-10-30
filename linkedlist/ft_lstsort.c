/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:03:29 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/11 17:16:27 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

void	ft_lstsort(t_ptlist *lst, int len)
{
	t_ptlist	current_node;
	t_ptlist	next_node;	

	current_node = (*lst);
	while (ft_lstget_index((*lst), (long)current_node->content) < len - 1)
	{
		next_node = current_node->next;
		while (1)
		{
			if ((long)current_node->content > (long)next_node->content)
				ft_lstswap(current_node, next_node);
			if (!next_node->next)
				break ;
			next_node = next_node->next;
		}
		current_node = current_node->next;
	}
}
