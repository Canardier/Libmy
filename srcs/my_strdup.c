#include "libft.h"

char 	*my_strdup(const char *s)
{
	char *s2;
	int i;

	s2 = malloc(sizeof(char) * my_strlen(s) + 1);
	i = 0;
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';

	return (s2);
}
