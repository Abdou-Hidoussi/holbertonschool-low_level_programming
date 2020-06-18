/**
*print_number - 0
*@n: int
*
*/
void print_number(int n)
{
	int i;

	i = n;
	while (i > 9)
	{
		_putchar(i % 10 + '0');
		i /= 10;
	}
}
