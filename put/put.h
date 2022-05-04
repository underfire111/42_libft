/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:04:59 by ppereira          #+#    #+#             */
/*   Updated: 2022/04/23 13:05:00 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUT_H)
# define PUT_H

# include <unistd.h>

# include "../string/string.h"

void	ft_putchar(char c);

void	ft_putchar_fd(char c, int fd);

void	ft_putendl(char *s);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr(int n);

void	ft_putnbr_fd(int n, int fd);

void	ft_putstr(char *str);

void	ft_putstr_fd(char *s, int fd);

#endif // PUT_H
