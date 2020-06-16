#include "holberton.h"
/**
*time - 0
*@i: int
*@j: int
*
*table - 0
*@n: int
*
*print_times_table - 0
*@n: integer
*Return: nothing
*
*
*
*/
void time(int i, int j)
{
	if (i * j > 99)
	{
		if (j != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar((i * j) / 100 + '0');
		_putchar(((i * j) / 10) % 10 + '0');
		_putchar((i * j) % 10 + '0');
	}
	else if (i * j > 9)
	{
		if (j != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar((i * j) / 10 + '0');
		_putchar((i * j) % 10 + '0');
	}
	else
	{
		if (j != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar((i * j) + '0');
	}
}

void table(int n)
{
	int i, j;

	for (i = 0; i <= n; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			time(i, j);
		}
		_putchar('\n');
	}
}

void print_times_table(int n)
{
	if (n < 15 && n > 0)
	{
		table(n);
	}
}
