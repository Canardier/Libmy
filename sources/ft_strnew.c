#include "libft.h"

char *ft_strnew(size_t size)
{
	if (size < 0)
		return (NULL);

	char *str;

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	ft_bzero(str, size);
	return (str);
}