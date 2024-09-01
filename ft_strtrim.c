#include "libft.h"

#include <stdio.h>

static int		is_in_set(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

static size_t	len_final(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (*s1 && is_in_set(*s1,set))
		s1++;
	while (*s1)
	{
		s1++;
		i++;
	}
	s1--;
	while (*s1 && is_in_set(*s1,set))
	{
		if (i > 0)
			i--;
		s1--;
	}
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	size_t	len_final_str;
	char    *start;

	len_final_str = len_final(s1, set);
	res = malloc(len_final_str * sizeof(char) + 1);
	if (!res)
		return (NULL);
	start = res;
	while (*s1 && is_in_set(*s1, set))
		s1++;
	while (len_final_str > 0)
	{
		*res++ = *s1++;
		len_final_str--;
	}
	*res = '\0';
	return (start);
}


// int	main(void)
// {
// 	const char	*s1 = "abbbaabsdfsdfsfdabbaabab";
// 	const char	*set = "ab";
// 	char	*trim = ft_strtrim(s1,set);
// 	printf("%d\n",len_final(s1,set));
// 	printf("%s\n",trim);
// 	free(trim);
// }
