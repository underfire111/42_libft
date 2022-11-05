#include "arrlist.h"

int	arrlist_destroy(pt_arrlist *pt_list)
{
	pt_arrlist	list;

	list = *pt_list;
	if (!list)
		return (LIST_NULL);
	free(list->elems);
	free(list);
	*pt_list = NULL;
	return (LIST_OK);
}

