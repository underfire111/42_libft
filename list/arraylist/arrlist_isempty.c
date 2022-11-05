#include "arrlist.h"

int	arrlist_isempty(pt_arrlist list)
{
	if (!list)
		return (1);
	return (list->size == 0);
}
