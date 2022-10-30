/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstis_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:03:27 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/05 16:05:00 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

int	ft_lstis_sorted(t_ptlist lst)
{
	int	tmp;
	
	if (!lst)
		return (0);
	if (!lst->next)
		return (1);
	while (lst->next)
	{
		tmp = (long)lst->content;
		lst = lst->next;
		if (tmp >= (long)lst->content)
			return (0);
	}
	return (1);
}
