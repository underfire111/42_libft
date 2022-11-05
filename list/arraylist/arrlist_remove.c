#include "arrlist.h"

int	arrlist_remove(pt_arrlist list, int rank, t_elem *elem)
{
	if (!list)
		return (LIST_NULL);
	if (list->size == 0)
		return (LIST_EMPTY);
	if (rank < 0 || rank > list->size - 1)
		return (LIST_INVALID_RANK);
	*elem = list->elems[rank];
	for (int i = rank; i < list->size - 1; i++)
		list->elems[i] = list->elems[i + 1];
	list->size--;
	return (LIST_OK);
}
