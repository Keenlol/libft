
#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*res;
	unsigned int	i;
	unsigned int	len_s;

	len_s = ft_strlen(s);
	res = malloc(len_s * sizeof(char) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
