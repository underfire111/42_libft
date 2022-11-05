#include "linklist.h"

void	linklist_print(pt_linklist list, void (*print)(t_elem))
{
	int		rank;
	pt_node current;

	if (!list)
		ft_putstr("(LIST NULL)\n");
	else if (list->size == 0)
		ft_putstr("(LIST EMPTY)\n");
	else
	{
		rank = 0;
		current = list->header->next;
		while (current != list->trailer)
		{
			print(current->elem);
			ft_putendl("");
			rank++;
			current = current->next;
		}
	}
	ft_putendl("");
}
