#include "libmy.h"

int	my_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (n-- && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}
