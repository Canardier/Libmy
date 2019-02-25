#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int a;
	int b;

	a = ft_strlen(dest);
	b = 0;
	while (b <= nb)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}