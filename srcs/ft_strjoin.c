#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	char *tmps1;
	
	str = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	tmps1 = (char*)s1;
	
	if (str == NULL)
		return (NULL);

	str = ft_strcat(tmps1, s2);

	return (str);
}
