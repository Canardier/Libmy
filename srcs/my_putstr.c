#include "libmy.h"

void	my_putstr(char const *s)
{
	write(1, s, my_strlen(s));
}
