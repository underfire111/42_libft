/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:03:05 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/11 16:39:24 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked-list.h"

int	ft_lstget_index(t_ptlist lst, long value)
{
	int	index;

	index = 0;
	if (!lst)
		return (-1);
	while (lst)
	{
		if ((long)lst->content == value)
			return (index);
		index++;
		lst = lst->next;
	}
	return (-1);
}
