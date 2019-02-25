#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	char *f;

	i = ft_strlen(s);
	f = (char*)s;

	while (s[i] != c)
	{
		if (f[i] == c)
			return (&f[i]);
		i--;
	}

	return (NULL);
}