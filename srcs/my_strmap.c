#include "libmy.h"

char	*my_strmap(char const *s, char (*f)(char))
{
	int i;
	char *str;

	i = 0;
	str = malloc(sizeof(char) * my_strlen(s));
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}

	return (str);
}