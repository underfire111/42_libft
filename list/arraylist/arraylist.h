#if !defined(ARRAY_LIST_H)
# define ARRAY_LIST_H

# define NULL				((void *) 0)
# define LIST_OK			0
# define LIST_NULL			1
# define LIST_NO_MEMORY		2
# define LIST_EMPTY			3
# define LIST_FULL			4
# define LIST_INVALID_RANK	5

struct			s_node;
struct			s_arrlist;
typedef struct	s_node *pt_node;
typedef struct	s_arrlist *pt_arrlist;
typedef void	*t_elem;

pt_arrlist	arrlist_create();

int			arrlist_destroy(pt_arrlist *list);

int			arrlist_add(pt_arrlist list, int rank, t_elem elem);

int			arrlist_remove(pt_arrlist list, int rank, t_elem *elem);

int			arrlist_get(pt_arrlist list, int rank, t_elem *elem);

int			arrlist_set(pt_arrlist list, int rank, t_elem new_elem, t_elem *old_elem);

int			arrlist_size(pt_arrlist list, int *size);

int			arrlist_isempty(pt_arrlist list);

int			arrlist_clear(pt_arrlist list);

void		arrlist_print(pt_arrlist list, void (*print)(t_elem));

#endif // ARRAY_LIST_H
