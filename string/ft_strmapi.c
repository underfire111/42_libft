/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:34:47 by ppereira          #+#    #+#             */
/*   Updated: 2021/04/13 17:17:50 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	new = NULL;
	if (s)
	{
		new = (char *)malloc(sizeof(*new) * (ft_strlen(s) + 1));
		if (!new)
			return (0);
		while (s[i])
		{
			new[i] = (*f)(i, s[i]);
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
