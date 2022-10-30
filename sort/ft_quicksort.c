#include "sort.h"
#include <stdio.h>

void	*partition(void *low, void *high, int elem_size, int(*op)(void *, void *))
{
	void	*pivot;
	void	*i;
	
	pivot = high;
	i = low - elem_size;

	for (void * j = low; j != high; j += elem_size)
	{
		if (op(pivot, j) > 0)
		{
			i += elem_size;
			ft_swap(i, j, elem_size);
		}
	}
	ft_swap(i + elem_size, high, elem_size);
	return i + elem_size;
}

void	sort(void *low, void *high, int elem_size, int(*op)(void *, void *))
{
	if (low < high)
	{
		void *pi;

		pi = partition(low, high, elem_size, op);
		sort(low, pi - elem_size, elem_size, op);
		sort(pi + elem_size, high, elem_size, op);
	}
}

void	ft_quicksort(void *arr, int arr_size, int elem_size, int(*op)(void *, void *))
{
	int		length;
	void	*high;

	length = arr_size / elem_size;
	high = arr + (length - 1) * elem_size;
	sort(arr, high, elem_size, op);
}