
#include "libft.h"

size_t     ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		c += 32;
	return (c);
}
