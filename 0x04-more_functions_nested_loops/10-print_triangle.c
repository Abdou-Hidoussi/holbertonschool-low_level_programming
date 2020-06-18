#include "holberon.h"
/**
*print_triangle - 0
*@size: int
*/
void print_triangle(int size)
{
	int i, j;

	i = 0;
	if (size > 0)
	{
		while (i <= size)
		{
			h = size - i;
			while (h > 0)
			{
				_putchar(' ');
				h--;
			}

			j = 0;
			while (j < i)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
