
#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    char	*s_copy;
    size_t	len_s1;
	size_t	i;

	i = 0;
	len_s1 = ft_strlen(s1);
    s_copy = malloc(len_s1 * (sizeof(char)) + 1);
	if (s_copy == NULL)
		return (NULL);
	while (i < len_s1)
	{
		s_copy[i] = s1[i];
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}
