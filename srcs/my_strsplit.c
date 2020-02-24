#include "libmy.h"

static int 	count_char(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			while (s[i] == c)
				i++;
		}
		else if (s[i] == '\0')
			return (count);
		i++;
	}

	return (count);
}

char **my_strsplit(char const *s, char c)
{
	char **tab;
	char *str;
	int i;
	int j;
	int a;

	tab = malloc(sizeof(char*) * count_char(s, c));
	str = malloc(sizeof(char) * my_strlen(s));
	i = 0;
	j = 0;
	a = 0;
	while (s[i++])
	{
		while (s[i] == c)
			i++;
		str[j] = s[i];
		if (s[i] == c)
		{
			tab[a] = my_strdup(str);
			a++;
			free(str);
			j = 0;
		}
		j++;
	}
	tab[a] = '\0';

	return (tab);
}