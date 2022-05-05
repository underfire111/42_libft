#include "linked-list.h"

void	ft_lstdel_between(t_ptlist *lst, int index)
{
	t_ptlist	node;
	t_ptlist	prev;

	node = ft_lstget_node(lst, index);
	prev = ft_lstget_node(lst, index-1);
	prev->next = node->next;
	ft_lstdelone(node, NULL);
}