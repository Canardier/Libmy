#include "libmy.h"

static char *my_strrev(char *s)
{
	int i;
	int j;
	char *tmp;

	i = my_strlen(s) - 1;
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

char    *my_itoa(int n)
{
    int i;
    int neg;
    long int nb;
    char *str;

    i = 0;
    neg = 0;
    nb = (long int)n;
    if (nb == 0)
        return ("0");
    if ((str = malloc(sizeof(char) * 12)) == NULL)
        return (NULL);
    if (nb < 0)
    {
        neg = 1;
        nb *= -1;
    }
    while (nb > 0)
    {
        str[i] = nb % 10 + '0';
        nb /= 10;
        i++;
    }
    if (neg)
        str[i++] = '-';
    str[i] = '\0';
    return (my_strrev(str));
}
