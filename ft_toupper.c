
#include "libft.h"

size_t     ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		c -= 32;
	return (c);
}
