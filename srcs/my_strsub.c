#include "libmy.h"

char *my_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	int i;

	str = malloc(sizeof(char) * len);
	i = 0;
	if (str == NULL)
		return (NULL);

	while (len--)
		str[i++] = s[start++];

	return (str);
}