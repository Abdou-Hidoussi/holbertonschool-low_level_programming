#include "holberton.h"
/**
*print_rev - 0
*@s: char
*
*/
void print_rev(char *s)
{
	char *f;

	*f = *s;
	while (*s != '\0')
	{
		s++;
	}

	while (*s != *f)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
