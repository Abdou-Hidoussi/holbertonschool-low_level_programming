#include "holberton.h"
/*
*print_alphabet_x10 - 0
*Return: nothing
*/
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 60; ++i)
	{
		for (j = 0; j < 60; ++j)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
