char *ft_strchr(const char *s, int c)
{
	int i;
	char *f;

	i = 0;
	f = (char*)s;

	while (f[i])
	{
		if (f[i] == c)
			return (&f[i]);
		i++;
	}

	return (NULL);
}