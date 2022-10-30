#include "linklist_node.h"

int	linklist_set(pt_linklist list, int rank, void *new_elem, void *old_elem)
{
	pt_node	node;
	if (!list)
		return (NULL);
	if (rank < 0 || rank > list->size - 1)
		return (LIST_INVALID_RANK);
	node = linklist_nodeat(list, rank);
	if (node)
	{
		old_elem = node->elem;
		node->elem = new_elem;
	}
	return (LIST_OK);
}
