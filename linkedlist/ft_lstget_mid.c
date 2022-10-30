/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget_mid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:05:23 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/05 16:04:35 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

long	ft_lstget_mid(t_ptlist lst)
{
	t_ptlist	dup;
	t_ptlist	tmp;
	int			half_size;
	long long	median;

	dup = ft_lstdup(lst);
	half_size = ft_lstsize(dup) / 2;
	ft_lstsort(&dup, ft_lstsize(dup));
	tmp = dup;
	while (half_size--)
		tmp = tmp->next;
	median = (long)tmp->content;
	ft_lstclear(&dup, 0);
	return (median);
}
