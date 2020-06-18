/**
*more_numbers - 0
*@n: int
*/
void print_line(int n)
{
	int i;

	i = 10;
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
