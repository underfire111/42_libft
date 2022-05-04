/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:05:57 by ppereira          #+#    #+#             */
/*   Updated: 2022/04/23 13:05:58 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

int partition(int *arr, int low, int high)
{
	int pivot;
	int i;

	i = (low - 1);
	pivot = arr[high];
	for (int j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			ft_swap(&arr[i], &arr[j]);
		}
	}
	ft_swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void	ft_quick_sort(int *arr, int low, int high)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high);
		ft_quick_sort(arr, low, pi - 1);
		ft_quick_sort(arr, pi + 1, high);
	}
}
