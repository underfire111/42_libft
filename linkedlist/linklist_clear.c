#include "linklist_node.h"

int	linklist(pt_linklist list)
{
	pt_node current;
	
	if (!list)
		return (LIST_NULL);
	current = list->header->next;
	while (current != list->trailer)
	{
		current = current->next;
		free(current->prev);
	}
	list->header->next = list->trailer;
	list->trailer->prev = list->header;
	list->size = 0;
	return (LIST_OK);
}
