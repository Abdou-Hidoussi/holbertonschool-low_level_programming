#include "holberton.h"
/*
*print_alphabet_x10 - 0
*Return: nothing
*/
void table(int n)
{
	if (i * j > 99)
	{
		_putchar((i * j) / 100 + '0');
		_putchar(((i * j) / 10) % 10 + '0');
		_putchar((i * j) % 10 + '0');
		if (j != n)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	else if (i * j > 9)
	{
		_putchar((i * j) / 10 + '0');
		_putchar((i * j) % 10 + '0');
		if (j != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		_putchar((i * j) + '0');
		if (j != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}


void print_times_table(int n)
{
	int i, j;

	if (n < 15)
	{
		for (i = 0; i <= n; ++i)
		{
			for (j = 0; j <= n; ++j)
			{
				table(n);
			}
			_putchar('\n');
		}
	}

}
