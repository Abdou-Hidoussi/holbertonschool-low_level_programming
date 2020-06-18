#include "holberon.h"
/**
*print_diagonal - 0
*@n: int
*/
void print_diagonal(int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			j = 0
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			i++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
