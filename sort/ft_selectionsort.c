#include "sort.h"
#include <stdio.h>

void	ft_selectionsort(void *arr, int arr_size, int elem_size, int(*op)(void *, void *))
{
	int	index;
	int length;

	length = arr_size / elem_size;
	for (int i = 0; i < length; i++)
	{
		index = i;
		for (int j = i + 1; j < length; j++)
		{
			if (op(arr + (index * elem_size), arr + (j * elem_size)) > 0)
				index = j;
		}
		if (i != index)
			ft_swap(arr + (i * elem_size), arr + (index * elem_size), elem_size);
	}
}
