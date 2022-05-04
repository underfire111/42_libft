/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked-list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:05:07 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/04 17:32:00 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(LIST_H)
# define LIST_H

# include <stdlib.h>
# include <limits.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_front(t_list **lst, t_list *new);

void	ft_lstclear(t_list **lst, void (*del)(void*));

void	ft_lstdelone(t_list *lst, void (*del)(void*));

t_list	*ft_lstdup(t_list *lst);

int		ft_lstget_index(t_list *lst, long value);

long	ft_lstget_max(t_list *lst);

long	ft_lstget_mid(t_list *lst);

long	ft_lstget_min(t_list *lst);

t_list	*ft_lstget_node(t_list *lst, int index);

int		ft_lstis_sorted(t_list *lst);

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstlast(t_list *lst);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstnew(void *content);

int		ft_lstsize(t_list *lst);

void	ft_lstsort(t_list **lst, int len);

void	ft_lstswap(t_list *n1, t_list *n2);

#endif // LIST_H
