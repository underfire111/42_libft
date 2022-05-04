/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:59:04 by ppereira          #+#    #+#             */
/*   Updated: 2021/10/07 17:32:58 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

int	ft_atoi(const char *str)
{
	unsigned int	result;
	int				sign;

	sign = 1;
	result = 0;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = 10 * result + *str - 48;
		str++;
		if (result > INT_MAX)
			break ;
	}
	if ((result == (unsigned int)INT_MAX + 1 && sign == -1)
		|| result <= INT_MAX)
		return (sign * result);
	return (0);
}
