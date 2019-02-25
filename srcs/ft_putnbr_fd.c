#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 2147483647)
		ft_putstr_fd("2147483647", fd);

	else if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}

	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + 48, fd);
	}

	else
		ft_putchar_fd(n + 48, fd);
}
