/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctongpa <ctongpa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 08:49:24 by ctongpa           #+#    #+#             */
/*   Updated: 2024/05/27 08:49:24 by ctongpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	i;

	count = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return(count);
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (count);
}
