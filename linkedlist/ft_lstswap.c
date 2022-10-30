/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:03:32 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/05 16:07:04 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linkedlist.h"

void	ft_lstswap(t_ptlist n1, t_ptlist n2)
{
	void	*tmp;

	tmp = n1->content;
	n1->content = n2->content;
	n2->content = tmp;
}
