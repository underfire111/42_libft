#include "linklist_node.h"

int	linklist_isempty(pt_linklist list)
{
	if (!list)
		return (LIST_NULL);
	return (list->size == 0);
}
