#if !defined(LINKLIST_NODE_H)
#define LINKLIST_NODE_H

# include "linkedlist.h"

# include <stdlib.h>

typedef struct	s_node
{
	void	*elem;
	pt_node	next;
	pt_node	prev;
}	t_node;

typedef struct s_linklist
{
	pt_node	header;
	pt_node	trailer;
	int		size;
}	t_linklist;

pt_node		linklist_nodeat(pt_linklist list, int rank);

#endif // LINKLIST_NODE_H
