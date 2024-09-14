/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctongpa <ctongpa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:02:21 by ctongpa           #+#    #+#             */
/*   Updated: 2024/09/14 16:27:13 by ctongpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c_char;
	char	*last_appear;

	c_char = (char)c;
	last_appear = NULL;
	while (*s)
	{
		if (*s == c_char)
			last_appear = (char *)s;
		s++;
	}
	if (*s == c_char)
		last_appear = (char *)s;
	return (last_appear);
}
