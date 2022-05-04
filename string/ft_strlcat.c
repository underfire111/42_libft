/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:29:57 by ppereira          #+#    #+#             */
/*   Updated: 2021/08/23 13:34:39 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(dst);
	if (size <= len)
		return (size + ft_strlen(src));
	size -= (len + 1);
	while (*src && size-- > 0)
		dst[len++] = *(src++);
	dst[len] = 0;
	return (len + ft_strlen(src));
}
