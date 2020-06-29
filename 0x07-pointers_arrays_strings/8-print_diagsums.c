#include "holberton.h"
/**
*print_diagsums - 0
*@a: table
*@size: size of a
*
*/
void print_diagsums(int *a, int size)
{
	int i;

	for (i = 0; i < size; ++i)
	{
		n += a[i][i];
	}

	while (n > 9)
	{
		_putchar(n / 10 + '0');
		n %= 10;
	}
	_putchar(n);
}
