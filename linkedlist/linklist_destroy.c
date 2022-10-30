#include "linklist_node.h"

int	linklist_destroy(pt_linklist *pt_list)
{
	pt_linklist list;
	
	list = *pt_list;
	if (!list)
		return (LIST_NULL);
	linklist_clear(list);
	free(list);
	*pt_list = NULL;
	return (LIST_OK);
}
