
#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	unsigned char   *ptr;
	
	ptr = b;
	while (len > 0)
	{
		*ptr++ = c;
		len--;
	}
	return (b);
}
