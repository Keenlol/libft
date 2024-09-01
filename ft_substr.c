
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (start + len > len_s)
		len = len_s - start;
	new_str = malloc(len  * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = s[start];
		i++;
		start++;
	}
	new_str[i] = '\0';
	return (new_str);
}
