/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctongpa <ctongpa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:57:10 by ctongpa           #+#    #+#             */
/*   Updated: 2024/09/01 17:09:38 by ctongpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	f_word_count(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	**fill_in(const char *s, char c, char **res)
{
	size_t	i;
	size_t	word_len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			word_len = 0;
			while (s[word_len] && s[word_len] != c)
				word_len++;
			res[i] = malloc((word_len + 1) * sizeof(char));
			if (!res[i])
				return (NULL);
			ft_strlcpy(res[i], s, word_len + 1);
			s += word_len;
			i++;
		}
		else
			s++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = f_word_count(s, c);
	res = malloc((word_count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res = fill_in(s, c, res);
	return (res);
}
