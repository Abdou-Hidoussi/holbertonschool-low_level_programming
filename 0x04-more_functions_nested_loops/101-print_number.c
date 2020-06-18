#include "holberton.h"
/**
*print_number - 0
*@n: int
*
*/
void print_number(int n)
{
	int i, r;

	i = n;
	r = 0;
	if (n > 0)
	{
		i = n;
	}
	else if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	if (n != 0)
	{
		while (i > 0)
		{
			r = (r * 10) + (i % 10);
			i = i / 10;
		}
		while (r > 0)
		{
			_putchar(r % 10 + '0');
			r = r / 10;
		}
	}
	else
	{
		_putchar('0');
	}

}
