#include "libmy.h"

char *my_strnstr(const char *meule_de_foin, const char *aiguille, size_t len)
{
	char *s1;
	int i;
	int j;

	s1 = (char*)meule_de_foin;
	i = 0;
	j = 0;
	while (len--)
	{
		if (s1[i] == aiguille[j])
		{
			j++;
			if (aiguille[j] == '\0')
				return (&s1[i - j + 1]);
		}
		i++;
		if (s1[i] != aiguille[j])
			j = 0;
	}

	return(NULL);
}