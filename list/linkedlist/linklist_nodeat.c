#include "linklist.h"

pt_node	linklist_nodeat(pt_linklist list, int rank)
{
	int		curent_rank;
	pt_node	current_node;

	if (rank > list->size / 2)
		curent_rank = list->size / 2;
	else
		curent_rank = 0;
	current_node = list->header->next;
	while (!current_node)
	{
		if (curent_rank == rank)
			return current_node;
		curent_rank++;
		current_node = current_node->next;
	}
	return (NULL);
}
