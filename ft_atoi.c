/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctongpa <ctongpa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:50:34 by ctongpa           #+#    #+#             */
/*   Updated: 2024/09/01 16:50:37 by ctongpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	negative_holder;

	num = 0;
	negative_holder = 1;
	while ((9 <= *str && *str <= 13)
		|| *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative_holder *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		num *= 10;
		num += (*str - '0');
		str++;
	}
	num *= negative_holder;
	return (num);
}
