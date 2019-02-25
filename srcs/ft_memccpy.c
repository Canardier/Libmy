#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *tmpDest;
	char *tmpSrc;
	int i;

	tmpDest = (char*)dest;
	tmpSrc = (char*)src;
	i = 0;
	while (n--)
	{
		tmpDest[i] = tmpSrc[i];
		if (tmpDest[i] == c)
			return (dest);
		i++;
	}

	return (NULL);
}