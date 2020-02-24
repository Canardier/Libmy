#include "libft.h"

char	*my_strncat(char *dest, const char *src, size_t n)
{
	int a;
	int b;

	a = my_strlen(dest);
	b = 0;
	while (n--)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
