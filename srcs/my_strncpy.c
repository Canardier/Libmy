#include "libmy.h"

char	*my_strncpy(char *dest, const char *src, size_t n)
{
	int i;

	i = 0;
	while (n--)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			dest[i] = '\0';
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
