
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char chr;
	size_t i;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == chr)
			return (str + i);
		i++;
	}
	return (NULL);
}
