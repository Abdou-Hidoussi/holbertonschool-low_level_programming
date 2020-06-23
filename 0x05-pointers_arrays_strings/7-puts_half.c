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
	while (i < j && j != 0)
	{
		if (j % 2 == 0)
		{
			_putchar(str[i]);
		}
		else if (i >= (j - 1) / 2)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
