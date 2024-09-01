#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
	char c_char = (char)c;

	while (*s)
	{
		if (*s == c_char)
			return (char *)s;
		s++;
	}
	if (c == 0)
		return (char *)s;
	return (NULL);
}
