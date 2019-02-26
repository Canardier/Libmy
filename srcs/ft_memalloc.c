#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size + 1);

	ft_bzero(mem,size + 1);

	return (mem);
}
