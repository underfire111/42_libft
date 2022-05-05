/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked-list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:05:07 by ppereira          #+#    #+#             */
/*   Updated: 2022/05/05 16:10:20 by ppereira         ###   ########.fr       */
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

typedef	t_list	*t_ptlist;

void	ft_lstadd_back(t_ptlist *lst, t_ptlist new);

void	ft_lstadd_front(t_ptlist *lst, t_ptlist new);

void	ft_lstclear(t_ptlist *lst, void (*del)(void*));

void	ft_lstdel_between(t_ptlist *lst, int index);

void	ft_lstdelone(t_ptlist lst, void (*del)(void*));

t_list	*ft_lstdup(t_ptlist lst);

int		ft_lstget_index(t_ptlist lst, long value);

long	ft_lstget_max(t_ptlist lst);

long	ft_lstget_mid(t_ptlist lst);

long	ft_lstget_min(t_ptlist lst);

t_list	*ft_lstget_node(t_ptlist lst, int index);

int		ft_lstis_sorted(t_ptlist lst);

void	ft_lstiter(t_ptlist lst, void (*f)(void *));

t_list	*ft_lstlast(t_ptlist lst);

t_list	*ft_lstmap(t_ptlist lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstnew(void *content);

int		ft_lstsize(t_ptlist lst);

void	ft_lstsort(t_ptlist *lst, int len);

void	ft_lstswap(t_ptlist n1, t_ptlist n2);

#endif // LIST_H
