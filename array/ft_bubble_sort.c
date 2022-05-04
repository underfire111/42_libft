/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:41:56 by ppereira          #+#    #+#             */
/*   Updated: 2021/10/11 17:57:18 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

void	bubble_sort_ascending(int *arr, int len)
{
	int	i;
	int	j;

	i = -1;
	while (++i < len)
	{
		j = i;
		while (++j < len)
		{
			if (arr[i] > arr[j])
				ft_swap(&arr[i], &arr[j]);
		}	
	}
}

void	bubble_sort_descending(int *arr, int len)
{
	int	i;
	int	j;

	i = -1;
	while (++i < len)
	{
		j = i;
		while (++j < len)
		{
			if (arr[i] < arr[j])
				ft_swap(&arr[i], &arr[j]);
		}	
	}
}

void	ft_bubble_sort(int *arr, int flag)
{
	if (!flag)
		bubble_sort_ascending(arr, ft_arrlen(arr));
	bubble_sort_descending(arr, ft_arrlen(arr));
}
