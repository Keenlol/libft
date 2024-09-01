/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctongpa <ctongpa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:59:22 by ctongpa           #+#    #+#             */
/*   Updated: 2024/09/01 16:59:24 by ctongpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*res;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = malloc((len_s1 + len_s2) * sizeof(char) + 1);
	if (!res)
		return (NULL);
	while (i < len_s1)
	{
		res[i] = s1[i];
		i++;
	}
	while (i < len_s1 + len_s2)
	{
		res[i] = s2[i - len_s1];
		i++;
	}
	res[i] = '\0';
	return (res);
}
