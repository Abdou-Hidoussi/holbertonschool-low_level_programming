#include "holberton.h"
/**
*_puts - 0
*@str: char
*
*/
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
