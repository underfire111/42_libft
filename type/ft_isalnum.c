/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppereira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 13:25:18 by ppereira          #+#    #+#             */
/*   Updated: 2021/04/13 18:11:33 by ppereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "type.h"

int	ft_isalnum(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58));
}
