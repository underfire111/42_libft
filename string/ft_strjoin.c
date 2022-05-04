/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:25:49 by ppereira          #+#    #+#             */
/*   Updated: 2021/10/11 17:13:21 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;

	new = malloc(ft_strlen(s1) + 1 + ft_strlen(s2));
	if (!s1 || !s2 || !new)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i++])
		new[i - 1] = s1[i - 1];
	while (s2[j++])
		new[i + j - 2] = s2[j - 1];
	new[i + j - 2] = 0;
	return (new);
}
