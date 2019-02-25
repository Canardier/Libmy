#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int i;
	char *tmp;

	i = 0;
	tmp = (char*)s;

	while (n--)
	{
		tmp[i] = c;
		i++;
	}

	return (s);
}