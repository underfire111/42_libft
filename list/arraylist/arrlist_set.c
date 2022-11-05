#include "arrlist.h"

int	arrlist_set(pt_arrlist list, int rank, t_elem new_elem, t_elem *old_elem)
{
	if (!list)
		return (LIST_NULL);
	if (rank < 0 || rank > list->size - 1)
		return (LIST_INVALID_RANK);
	*old_elem = list->elems[rank];
	list->elems[rank] = new_elem;
	return (LIST_OK);
}

