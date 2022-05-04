/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:46:38 by ppereira          #+#    #+#             */
/*   Updated: 2021/04/13 17:11:28 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	new = NULL;
	i = 0;
	if (start >= ft_strlen(s))
	{
		start = 0;
		len = 0;
	}
	if (s && (ft_strlen(s) - 1) >= start)
	{
		if (ft_strlen(s) - start < len)
			len = ft_strlen(s) - start;
		new = (char *)malloc(sizeof(*new) * (len + 1));
		if (!new)
			return (0);
		while (i < len)
		{
			new[i] = s[start + i];
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
