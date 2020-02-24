int 	my_isalpha(int c)
{
	if (c >= 65 && c <= 90)
		c = 1024;
	else if (c >= 97 && c <= 122)
		c = 1024;
	else
		c = 0;

	return (c);
}