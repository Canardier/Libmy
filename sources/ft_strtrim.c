#include "libft.h"

char *ft_strtrim(char const *s)
{
	char *str;
	int i;
	int j;

	str = ft_strnew(ft_strlen(s));
	i = 0;
	j = 0;

	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[i])
	{
		str[j] = s[i];
		j++;
		i++;
	}
	while (s[i-1] == ' ' || s[i-1] == '\t' || s[i-1] == '\n')
	{
		str[j] = '\0';
		j--;
		i--;
	}
	return (str);
}