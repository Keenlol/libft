#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char c_char = (char)c;
    char *last_appear;

    last_appear = NULL;
	while (*s)
	{
		if (*s == c_char)
			last_appear = (char *)s;
		s++;
	}
	if (c == 0)
		return (char *)s;
	return (last_appear);
}
