#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{

	int i;
	int j;
	int b;
	char *src;
	char *dest;

	i = 0;
	b = 0;
	j = 0;
	src = (char*)s;
	dest = malloc(sizeof(s));
	while (n--)
	{
		if (src[i] != c)
			i++;
		else if (src[i] == c)
			b = 1;
	}

	if (b == 1)
		{
			while (src[i] != '\0')
			{
				dest[j] = src[i];
				i++;
				j++;
			}
			dest[j] = '\0';
			return (dest);
		}

	return (NULL);
}