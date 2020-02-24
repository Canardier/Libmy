#include "libmy.h"

void	*my_memcpy(void *dest, const void *src, size_t n)
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
		i++;
	}

	return (dest);
}