#if !defined(ARRLIST_H)
#define ARRLIST_H

# include "arraylist.h"
# include "../../put/put.h"

# include <stdlib.h>

typedef struct s_arrlist
{
	t_elem	*elems;
	int		size;
	int		capacity;
}	t_arrlist;

int	ensure_capacity(pt_arrlist list);

#endif // ARRLIST_H
