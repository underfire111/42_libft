#if !defined(LINKEDLIST_H)
# define LINKEDLIST_H

# define NULL				((void *) 0)
# define LIST_OK			0
# define LIST_NULL			1
# define LIST_NO_MEMORY		2
# define LIST_EMPTY			3
# define LIST_FULL			4
# define LIST_INVALID_RANK	5

struct			s_node;
struct			s_linklist;
typedef struct	s_node *pt_node;
typedef struct	s_linklist *pt_linklist;
typedef void	*t_elem;

pt_linklist	linklist_create();

int			linklist_destroy(pt_linklist *list);

int			linklist_add(pt_linklist list, int rank, t_elem elem);

int			linklist_remove(pt_linklist list, int rank, t_elem *elem);

int			linklist_get(pt_linklist list, int rank, t_elem *elem);

int			linklist_set(pt_linklist list, int rank, t_elem new_elem, t_elem *old_elem);

int			linklist_size(pt_linklist list, int *size);

int			linklist_isempty(pt_linklist list);

int			linklist_clear(pt_linklist list);

void		linklist_print(pt_linklist list, void (*print)(t_elem));

#endif // LINKEDLIST_H
