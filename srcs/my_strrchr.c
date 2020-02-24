#include "libft.h"

char *my_strrchr(const char *s, int c)
{
	int i;
	char *f;

	i = my_strlen(s);
	f = (char*)s;

	while (s[i] != c)
	{
		if (f[i] == c)
			return (&f[i]);
		i--;
	}

	return (NULL);
}