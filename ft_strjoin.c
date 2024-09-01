
#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*new_str;
	size_t	i;
	
	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = malloc((len_s1 + len_s2) * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	while (i < len_s1)
	{
		new_str[i] = *s1;
		s1++;
		i++;
	}
	while (i < len_s1 + len_s2)
	{
		new_str[i] = *s2;
		s2++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
