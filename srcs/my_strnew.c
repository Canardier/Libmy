#include "libft.h"

char *my_strnew(size_t size)
{
	char *str;

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	my_bzero(str, size);
	return (str);
}
