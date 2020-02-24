#include "libmy.h"

void	my_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;

	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}
