#include "libmy.h"

void	my_bzero(void *s, size_t n)
{
	char *tmp;
	int i;

	tmp = (char*)s;
	i = 0;

	while (n--)
	{
		tmp[i] = 0;
		i++;
	}
}