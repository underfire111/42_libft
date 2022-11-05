#include "arrlist.h"

int	arrlist_clear(pt_arrlist list)
{
	if (!list)
		return (LIST_NULL);
	list->size = 0;
	return (LIST_OK);
}
