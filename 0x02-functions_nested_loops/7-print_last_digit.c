#include "holberton.h"
/**
*print_last_digit - 0
*@n: integer
*Return: digit
*/
int print_last_digit(int n)
{
	int i;

	if (n > 0)
	{
		i = n % 10;
		_putchar(i + '0');
		return (i);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		i = -n % 10;
		_putchar(i + '0');
		return (i);
	}
}
