/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctongpa <ctongpa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:53:43 by ctongpa           #+#    #+#             */
/*   Updated: 2024/09/01 16:53:59 by ctongpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_len_all(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		len = 11;
	else if (n < 0)
	{
		len++;
		n *= -1;
	}
	else if (n == 0)
		len++;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*the_actual_itoa(long nbr, int len_all, char *res)
{
	res[0] = '0';
	if (nbr < 0)
	{
		nbr *= -1;
		res[0] = '-';
	}
	res[len_all] = '\0';
	len_all--;
	while (len_all >= 0 && nbr != 0)
	{
		if (nbr < 10)
			res[len_all] = nbr + '0';
		else
			res[len_all] = (nbr % 10) + '0';
		len_all--;
		nbr /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len_all;
	long	nbr;

	nbr = n;
	len_all = f_len_all(n);
	res = malloc(len_all * sizeof(char) + 1);
	if (!res)
		return (NULL);
	res = the_actual_itoa(nbr, len_all, res);
	return (res);
}
