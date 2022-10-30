#include "linklist_node.h"

int	linklist_get(pt_linklist list, int rank, void *elem)
{
	pt_node node;

	if (!list)
		return (NULL);
	if (rank < 0 || rank > list->size - 1)
		return (LIST_INVALID_RANK);
	node = linklist_nodeat(list, rank);
	if (node)
		elem = node->elem;
	return (LIST_OK);
}