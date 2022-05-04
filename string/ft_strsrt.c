/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:12:37 by ppereira          #+#    #+#             */
/*   Updated: 2021/10/11 18:00:11 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

int	partition(char **strs, int low, int high)
{
	int		i;
	int		j;
	char	*pivot;

	pivot = ft_strdup(strs[high]);
	i = (low - 1);
	j = low - 1;
	while (++j < high)
	{
		if (ft_strcmp(pivot, strs[j]) > 0)
		{
			i++;
			ft_strswp(&strs[i], &strs[j]);
		}
	}
	ft_strswp(&strs[i + 1], &strs[high]);
	return (i + 1);
}

void	ft_strsrt(char **strs, int low, int high)
{
	int	pi;

	if (low < high)
	{
		pi = partition(strs, low, high);
		ft_strsrt(strs, low, pi - 1);
		ft_strsrt(strs, pi + 1, high);
	}
}
