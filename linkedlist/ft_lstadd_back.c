/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:34:05 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/11 17:20:33 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

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
