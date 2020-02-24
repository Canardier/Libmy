#include "libft.h"

void	*my_memmove(void *dest, const void *src, size_t n)
{
	char *tmp;

	tmp = malloc(sizeof(src) + sizeof(dest) + 1);
	my_memcpy(tmp, dest, n);
	my_memcpy(tmp, src, n);
	my_memcpy(dest, tmp, n);

	free(tmp);

	return (dest);
}