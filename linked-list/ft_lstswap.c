/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:03:32 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/04 17:31:05 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked-list.h"

void	ft_lstswap(t_list *n1, t_list *n2)
{
	void	*tmp;

	tmp = n1->content;
	n1->content = n2->content;
	n2->content = tmp;
}
