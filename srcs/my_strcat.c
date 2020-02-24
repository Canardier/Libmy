#include "libmy.h"

char	*my_strcat(char *dest,const char *src)
{
	int i;
	int j;

	j = 0;
	i = my_strlen(dest);

	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	
	dest[i] = '\0';

	return (dest);
}
