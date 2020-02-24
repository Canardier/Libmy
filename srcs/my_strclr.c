#include "libmy.h"

void	my_strclr(char *s)
{
	my_bzero(s, my_strlen(s));
}