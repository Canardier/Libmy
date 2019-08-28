int ft_atoi(const char *nptr)
{
	int i;
	int nb;
	int n;

	i = 0;
	nb = 0;
	n = 0;
	while (nptr[i] && nptr[i] < 33)
		i++;
	if (nptr[i] == '-')
		n = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb = nb * 10 + (nptr[i] - '0');
		i++;
	}
	if (n == 1)
		return(-nb);

	return(nb);
}
