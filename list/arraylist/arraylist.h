#if !defined(ARRAY_LIST_H)
#define ARRAY_LIST_H

#define NULL				(void *) 0
#define LIST_OK				0
#define LIST_NULL			1
#define LIST_NO_MEMORY		2
#define LIST_EMPTY			3
#define LIST_FULL			4
#define LIST_INVALID_RANK	5

struct			s_node;
struct			s_arrlist;
typedef struct	s_node *pt_node;
typedef struct	s_arrlist *pt_arrlist;
typedef void	*t_elem;

pt_arrlist	linklist_create();

int			linklist_destroy(pt_arrlist *list);

int			linklist_add(pt_arrlist list, int rank, t_elem elem);

int			linklist_remove(pt_arrlist list, int rank, t_elem *elem);

int			linklist_get(pt_arrlist list, int rank, t_elem *elem);

int			linklist_set(pt_arrlist list, int rank, t_elem new_elem, t_elem *old_elem);

int			linklist_size(pt_arrlist list, int *size);

int			linklist_isempty(pt_arrlist list);

int			linklist_clear(pt_arrlist list);

void		linklist_print(pt_arrlist list, void (*print)(t_elem));

#endif // ARRAY_LIST_H
