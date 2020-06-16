#include "holberton.h"
/*
*print_alphabet_x10 - 0
*Return: nothing
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}

	return (n * (-1));
}


int print_last_digit(int n)
{
	int i;

	i = _abs(n);
	i %= 10;
	_putchar('0' + i);
	return (i);
}
