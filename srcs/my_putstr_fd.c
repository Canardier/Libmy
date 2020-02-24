#include "libmy.h"

void	my_putstr_fd(char const *s, int fd)
{
	write(fd, s, my_strlen(s));
}