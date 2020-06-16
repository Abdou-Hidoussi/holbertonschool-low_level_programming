#include "holberton.h"
/*
*print_alphabet_x10 - 0
*Return: nothing
*/
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else if (n != 0)
	{
		_putchar(((n * (-1)) % 10) + '0');
		return ((n * (-1)) % 10);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
