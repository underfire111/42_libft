/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:05:49 by ppereira          #+#    #+#             */
/*   Updated: 2022/04/23 13:05:50 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ARRAY_H)
# define ARRAY_H

int		ft_arrlen(void *arr);

void	ft_bubble_sort(int *arr,int flag);

void 	ft_quick_sort(int *arr, int low, int high);

void	ft_selection_sort(int *arr, int flag);

void	ft_swap(int *a, int *b);

#endif // ARRAY_H
