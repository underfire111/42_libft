/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:42:55 by ppereira          #+#    #+#             */
/*   Updated: 2021/04/13 17:14:35 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_pos;

	last_pos = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last_pos = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (last_pos);
}
