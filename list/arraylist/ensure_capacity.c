#include "arrlist.h"

int	ensure_capacity(pt_arrlist list)
{
	int		new_capacity;
	t_elem *new_array;	

	if (list->size == list->capacity)
	{
		new_capacity = list->capacity * 2;
		new_array = (t_elem *)realloc(list->elems, new_capacity * sizeof(t_elem));
		if (!new_array)
			return (0);
		list->elems = new_array;
		list->capacity = new_capacity;
	}
	return (1);
}