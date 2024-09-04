/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctongpa <ctongpa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:01:43 by ctongpa           #+#    #+#             */
/*   Updated: 2024/09/01 17:02:13 by ctongpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!haystack && len == 0)
		return (NULL);
	if (*needle == 0)
		return ((char *) haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (!needle[j])
			return ((char *) &haystack[i - j + 1]);
		i++;
	}
	return (NULL);
}
