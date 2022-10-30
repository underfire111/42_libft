# include "sort.h"

int	ft_issorted(void *arr, int arr_size, int elem_size, int(*op)(void *, void *))
{
	int	length;

	length = arr_size / elem_size;
	for (int i = 0; i < length - 1; i++)
	{
		if (op(arr + (i * elem_size), arr + ((i + 1) * elem_size)) > 0)
			return (0);
	}
	return (1);
}