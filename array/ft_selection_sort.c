/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:06:00 by ppereira          #+#    #+#             */
/*   Updated: 2022/04/23 13:06:01 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

void	selectoin_sort_ascending(int *arr, int len)
{
	int min_index;
	int	i;
	int j;

	i = -1;
	min_index = 0;
	while (++i < len - 1)
	{
		j = i;
		while (++j < len)
		{
			if (arr[i] > arr[j])
				min_index = j;
		}
		ft_swap(&arr[i], &arr[min_index]);	
	}
}

void	selectoin_sort_descending(int *arr, int len)
{
	int max_index;
	int	i;
	int j;

	i = -1;
	max_index = 0;
	while (++i < len - 1)
	{
		j = i;
		while (++j < len)
		{
			if (arr[i] < arr[j])
				max_index = j;
		}
		ft_swap(&arr[i], &arr[max_index]);	
	}
}

void	ft_selection_sort(int *arr, int flag)
{
	if (!flag)
		selectoin_sort_ascending(arr, ft_arrlen(arr));
	selectoin_sort_descending(arr, ft_arrlen(arr));
}