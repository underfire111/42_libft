#include "linklist_node.h"

int	linklist_size(pt_linklist list, int *size)
{
	if (!list)
		return (LIST_NULL);
	*size = list->size;
	return (LIST_OK);
}
