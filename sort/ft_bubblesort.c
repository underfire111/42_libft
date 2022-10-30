#include "sort.h"

void	ft_bubblesort(void *arr, int arr_size, int elem_size, int(*op)(void *, void *))
{
	int length;

	length = arr_size / elem_size;
	for (int i = 0; i < length; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (op(arr + (i * elem_size), arr + (j * elem_size)) > 0)
				ft_swap(arr + (i * elem_size), arr + (j * elem_size), elem_size);
		}
	}
}
