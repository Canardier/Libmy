void	ft_striter(char *s, void (f*)(char *))
{
	int i;

	i = 0;

	while (str[i])
	{
		f(&s[i]);
		i++;
	}
}