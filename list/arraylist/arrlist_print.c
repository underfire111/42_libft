#include "arrlist.h"

void	arrlist_print(pt_arrlist list, void (*print)(t_elem))
{
	if (!list)
		ft_putstr("(LIST NULL)\n");
	else if (list->size == 0)
		ft_putstr("(LIST EMPTY)\n");
	else
	{
		for (int i = 0; i < list->size; i++)
		{
			print(list->elems[i]);
			ft_putendl("");
		}
	}
	ft_putendl("");
}
