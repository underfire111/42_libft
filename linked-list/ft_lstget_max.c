/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:03:21 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/04 17:30:16 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked-list.h"

long	ft_lstget_max(t_list *lst)
{
	long	max;

	if (!lst)
		return (INT_MAX);
	max = (long int)lst->content;
	while (lst)
	{
		if (max < (long int)lst->content)
			max = (long int)lst->content;
		lst = lst->next;
	}
	return (max);
}
