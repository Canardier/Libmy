#include "libft.h"

void	ft_pustr(char const *s)
{
	write(1, s, ft_strlen(s));
}