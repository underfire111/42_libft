#include "linklist_node.h"

pt_linklist	linklist_create()
{
	pt_linklist newlist;
	
	newlist = (pt_linklist)malloc(sizeof(t_linklist));
	if(!newlist)
		return (NULL);
	newlist->header = (pt_node)malloc(sizeof(t_node));
	newlist->trailer = (pt_node)malloc(sizeof(t_node));
	newlist->header->prev = NULL;
	newlist->trailer->next = NULL;
	newlist->header->next = newlist->trailer;
	newlist->trailer->prev = newlist->header;
	newlist->size = 0;
	return (newlist);
}
