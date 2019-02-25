#include "libft.h"

char	*ft_strcat(const char *src, char const *dest)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(dest);

	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	
	dest[i] = '\0';

	return (dest);
}
