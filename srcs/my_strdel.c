#include "libmy.h"

void	my_strdel(char **as)
{
	free(as);
	as = NULL;
}