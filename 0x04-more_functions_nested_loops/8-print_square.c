#include "holberon.h"
/**
*print_square - 0
*@size: int
*
*/
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		putchar('\n');
	}
}
