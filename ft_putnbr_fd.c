/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctongpa <ctongpa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:57:00 by ctongpa           #+#    #+#             */
/*   Updated: 2024/09/01 16:57:02 by ctongpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	keen_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		keen_putchar('-', fd);
		nbr *= -1;
	}
	if (nbr < 10)
	{
		keen_putchar((char)nbr + 48, fd);
		return ;
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	ft_putnbr_fd(nbr % 10, fd);
}

// int main(void)
// {
// 	ft_putnbr_fd(-211, 1);
// }
