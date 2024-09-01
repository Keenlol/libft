
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t len_needle;

	i = 0;
	j = 0;
	len_needle = ft_strlen(needle);
	if (*needle == 0)
		return ((char *)&haystack[0]);
	while (i < len)
	{
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		if (j == len_needle)
			return ((char *)&haystack[i-j+1]);
		i++;
	}
	return (NULL);
}
