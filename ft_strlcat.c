/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctongpa <ctongpa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:59:28 by ctongpa           #+#    #+#             */
/*   Updated: 2024/09/01 16:59:30 by ctongpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (src_len);
	j = ft_strlen(dst);
	dest_len = j;
	if (dstsize <= dest_len)
		return (src_len + dstsize);
	while (src[i] && i < dstsize - dest_len - 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (dest_len + src_len);
}
