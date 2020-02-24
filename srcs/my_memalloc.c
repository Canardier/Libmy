#include "libft.h"

void *my_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size + 1);

	my_bzero(mem,size + 1);

	return (mem);
}
