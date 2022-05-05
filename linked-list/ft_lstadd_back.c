/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:34:05 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/05 16:02:36 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked-list.h"

void	ft_lstadd_back(t_ptlist *lst, t_ptlist new)
{
	t_ptlist	temp;

	if (!(*lst))
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		if (temp != NULL)
			temp->next = new;
	}
}
