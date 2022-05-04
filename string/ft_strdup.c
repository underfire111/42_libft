/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:22:51 by ppereira          #+#    #+#             */
/*   Updated: 2021/08/23 13:59:35 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strdup(char *src)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(src);
	dst = malloc(sizeof(char) * len + 1);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, src, len + 1);
	return (dst);
}
