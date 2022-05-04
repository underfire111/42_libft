/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:07:14 by ppereira          #+#    #+#             */
/*   Updated: 2022/04/23 13:07:15 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(MEMORY_H)
# define MEMORY_H

# include <stdlib.h>

void	ft_bzero(void *str, size_t n);

void	*ft_calloc(size_t num, size_t size);

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t n);

void	*ft_memset(void *str, int c, size_t n);

#endif // MEMORY_H
