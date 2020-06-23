#include "holberton.h"
/**
*puts_half - 0
*@str: char
*
*/
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i;
	i = j / 2;
	if (j % 2 == 0)
	{
		while (i < j)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i += 1;
		while (i < j)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
