/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:03:29 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/04 17:30:58 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked-list.h"

void	ft_lstsort(t_list **lst, int len)
{
	t_list	*current_node;
	t_list	*next_node;	

	current_node = (*lst);
	while (ft_lstget_index((*lst) , (long)current_node->content) < len - 1)
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
