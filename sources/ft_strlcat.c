#include "libft.h"

size_t 		strlcat (char *dest, const char *src, size_t size)
{
	int a;
	int b;

	a = ft_strlen(dest);
	b = 0;
	while (b <= size)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = dest[a] - 1;
	dest[a] = '\0';
	return (a);
}