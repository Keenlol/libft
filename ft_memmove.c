#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char 		*d;
	const unsigned char *s;

	if (!dst && !src)
		return (NULL);

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}
