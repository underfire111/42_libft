#include "arrlist.h"

int	arrlist_size(pt_arrlist list, int *size)
{
	if (!list)
		return (LIST_NULL);
	*size = list->size;
	return (LIST_OK);
}
