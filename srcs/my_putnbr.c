#include "libmy.h"

void	my_putnbr(int n)
{
	if (n == -2147483648)
		my_putstr("-2147483648");
	else if (n < 0)
	{
		n = -n;
		my_putchar('-');
	}
	else if (n >= 10)
	{
		my_putnbr(n / 10);
		my_putchar(n % 10 + 48);
	}
	else
		my_putchar(n + 48);
}
