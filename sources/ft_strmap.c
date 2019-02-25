#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *str;

	i = 0;
	str = malloc(sizeof(char) * ft_strlen(s));
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}

	return (str);
}