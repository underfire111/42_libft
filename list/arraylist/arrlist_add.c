#include "arrlist.h"

int	arrlist_add(pt_arrlist list, int rank, t_elem elem)
{
	if (!list)
		return (LIST_NULL);
	if (rank < 0 || rank > list->size)
		return (LIST_INVALID_RANK);
	if (!ensure_capacity(list))
		return (LIST_NO_MEMORY);
	for (int i = list->size; i > rank; i--)
		list->elems[i] = list->elems[i - 1];
	list->elems[rank] = elem;
	list->size++;
	return (LIST_OK);
}
