/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:03:24 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/05 16:06:55 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

t_ptlist	ft_lstget_node(t_ptlist lst, int index)
{
	if (!lst)
		return (0);
	while (index--)
		lst = lst->next;
	return (lst);
}
