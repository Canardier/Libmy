#include "libft.h"

static char *ft_strrev(char *s)
{
	int i;
	int j;
	char *tmp;

	i = strlen(s) - 1;
	j = 0;
	tmp = malloc(sizeof(char) * i + 1);
	while (i >= 0)
	{
		tmp[j] = s[i];
		j++;
		i--;
	}
	tmp[j] = '\0';
	return (tmp);
}

char *ft_itoa(int n)
{
	char *str;
	int i;
	int base;
	int neg;

	str = malloc(sizeof(char) * 13);
	i = 0;
	if (n == 0)
		str[i] == '0';

	else if (n < 0)
		n = -n;

	while (n != 0)
	{
		str[i] = n % 10 + '0';
		i++;
		n = n/10;
	}

	if (neg)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	str = ft_strrev(str);

	return (str);
}