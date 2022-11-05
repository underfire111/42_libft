#include "arrlist.h"

int	arrlist_get(pt_arrlist list, int rank, t_elem *elem)
{
	if (!list)
		return (LIST_NULL);
	if (rank < 0 || rank > list->size - 1)
		return (LIST_INVALID_RANK);
	*elem = list->elems[rank];
	return (LIST_OK);
}
