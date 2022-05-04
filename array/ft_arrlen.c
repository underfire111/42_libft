/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:05:54 by ppereira          #+#    #+#             */
/*   Updated: 2022/04/23 13:05:55 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

int	ft_arrlen(void *arr)
{
	int	i;

	if (!arr)
		return (-1);
	i = sizeof(arr);
	i /= sizeof(*arr);
	return (i);
}
