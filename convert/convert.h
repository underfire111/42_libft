/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <ppereira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:05:44 by ppereira          #+#    #+#             */
/*   Updated: 2022/04/23 13:05:45 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CONVERT_H)
# define CONVERT_H

# include <limits.h>

# include "../memory/memory.h"
# include "../string/string.h"
# include "../type/type.h"

int		ft_atoi(const char *str);

char	*ft_itoa(int n);

int		ft_tolower(int c);

int		ft_toupper(int c);

#endif // CONVERT_H
