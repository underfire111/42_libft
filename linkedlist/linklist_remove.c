#include "linklist_node.h"

int	linklist_remove(pt_linklist list, int rank, void *elem)
{
	pt_node currnode;
	pt_node prevnode;
	pt_node nextnode;

	if (!list)
		return (NULL);
	if (list->size == 0)
		return (LIST_EMPTY);
	if (rank < 0 || rank > list->size - 1)
		return (LIST_INVALID_RANK);
	currnode = linklist_nodeat(list, rank);
	nextnode = currnode->next;
	prevnode = currnode->prev;
	prevnode->next = nextnode;
	nextnode->prev = prevnode;
	elem = currnode->elem;
	free(currnode);
	list->size--;
	return (LIST_OK);
}
