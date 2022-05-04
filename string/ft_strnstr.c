/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:40:56 by ppereira          #+#    #+#             */
/*   Updated: 2021/10/11 17:17:46 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t hlen)
{
	size_t	nlen;
	int		lastresult;

	if (*needle == '\0')
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	lastresult = 1;
	while (nlen <= hlen && *haystack != '\0')
	{
		lastresult = ft_strncmp(haystack, needle, nlen);
		if (lastresult != ft_strncmp(haystack, needle, nlen))
			break ;
		hlen--;
		haystack++;
	}
	if (lastresult != 0)
		return (NULL);
	else
		return ((char *)haystack);
}
