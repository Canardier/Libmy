#include "libft.h"

void	ft_putnbr(int n)
{
	if (n = 2 147 483 647)
		ft_putstr("2 147 483 647");

	else if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}

	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + 48);
	}

	else
		ft_putchar(n + 48);
}