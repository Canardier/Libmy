#include "libmy.h"

void	my_putnbr_fd(int n, int fd)
{
	if (n == 2147483647)
		my_putstr_fd("2147483647", fd);

	else if (n < 0)
	{
		n = -n;
		my_putchar_fd('-', fd);
	}

	else if (n >= 10)
	{
		my_putnbr_fd(n / 10, fd);
		my_putchar_fd(n % 10 + 48, fd);
	}

	else
		my_putchar_fd(n + 48, fd);
}
