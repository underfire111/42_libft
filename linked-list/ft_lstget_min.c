/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:05:19 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/04 17:30:23 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked-list.h"

long	ft_lstget_min(t_list *lst)
{
	long	min;

	if (!lst)
		return (INT_MIN);
	min = (long int)lst->content;
	while (lst)
	{
		if ((long int)lst->content < min)
			min = (long int)lst->content;
		lst = lst->next;
	}
	return (min);
}
