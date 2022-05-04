/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:31:21 by ppereira          #+#    #+#             */
/*   Updated: 2021/10/07 17:31:10 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.h"

static int	ft_countdigit(int n)
{
	int	i;

	i = 1;
	if (n == INT_MIN)
	{
		i++;
		n = -214748364;
	}
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;
	char	negative;

	negative = 0;
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		negative = 1;
	count = ft_countdigit(n);
	str = (char *)malloc(sizeof(*str) * (count + negative + 1));
	if (!str)
		return (0);
	ft_bzero(str, count + negative + 1);
	if (negative)
		n = -n;
	while (count > 0)
	{
		str[count + negative - 1] = (n % 10) + '0';
		count--;
		n = n / 10;
	}
	return (str);
}
