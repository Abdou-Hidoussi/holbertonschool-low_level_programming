#include "holberton.h"
/*
*print_alphabet_x10 - 0
*Return: nothing
*/
int print_last_digit(int n)
{
	int t;

	if (n >= 0)
	{
		t = n % 10
		_putchar('0' + t);
		return (t);
	}
	else
	{
		t = (n * (-1)) % 10;
		_putchar('0' + t);
		return (t);
	}

}
