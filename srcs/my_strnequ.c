#include "libft.h"

int		my_strnequ(char const *s1, char const *s2, size_t n)
{
	if (my_strncmp(s1, s2, n) == 0)
		return (1);

	return (0);
}