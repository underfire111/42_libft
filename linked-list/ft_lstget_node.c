/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:03:24 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/04 17:30:27 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked-list.h"

t_list	*ft_lstget_node(t_list *lst, int index)
{
	if (!lst)
		return (0);
	while (index--)
		lst = lst->next;
	return (lst);
}
