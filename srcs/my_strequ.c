#include "libmy.h"

int		my_strequ(char const *s1, char const *s2)
{
	if (my_strcmp(s1, s2) == 0)
		return (1);
	
	return (0);
}