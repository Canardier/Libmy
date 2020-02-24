#include "libmy.h"

size_t 		strlcat (char *dest, const char *src, size_t size)
{
	int a;
	int b;

	a = my_strlen(dest);
	b = 0;
	while (size--)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = dest[a] - 1;
	dest[a] = '\0';
	return (a);
}
