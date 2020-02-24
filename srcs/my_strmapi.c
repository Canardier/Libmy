#include "libmy.h"

char *my_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *str;

	i = 0;
	str = malloc(sizeof(char) * my_strlen(s));
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}

	return (str);
}