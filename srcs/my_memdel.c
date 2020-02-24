#include "libft.h"

void	my_memdel(void **ap)
{
	free(ap);
	ap = NULL;
}