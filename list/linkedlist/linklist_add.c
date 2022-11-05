#include "linklist.h"

int	linklist_add(pt_linklist list, int rank, t_elem elem)
{
	pt_node	currnode;
	pt_node	prevnode;
	pt_node	newnode;

	if (!list)
		return (LIST_NULL);
	if (rank < 0 || rank > list->size - 1)
		return (LIST_INVALID_RANK);
	newnode = (pt_node)malloc(sizeof(t_node));
	if (!newnode)
		return (LIST_NO_MEMORY);
	currnode = linklist_nodeat(list, rank);
	prevnode = currnode->prev;
	newnode->elem = elem;
	newnode->prev = prevnode;
	newnode->next = currnode;
	prevnode->next = newnode;
	currnode->prev = newnode;
	list->size++;
	return (LIST_OK);
}
