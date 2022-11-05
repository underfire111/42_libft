#include "arrlist.h"

pt_arrlist	arrlist_create()
{
	pt_arrlist	list;

	list = (pt_arrlist)malloc(sizeof(t_arrlist));
	if (!list)
		return (NULL);
	list->elems = (t_elem *)calloc(INITIAL_CAPACITY,
		sizeof(t_elem));
	if (!list->elems)
	{
		free(list);
		return (NULL);
	}
	list->size = 0;
	list->capacity = INITIAL_CAPACITY;
	return (list);
}
