#include "libft.h"

void	my_putendl_fd(char const *s, int fd)
{
	my_putstr_fd(s, fd);
	my_putchar_fd('\n', fd);
}