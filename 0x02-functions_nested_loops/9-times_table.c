#include "holberton.h"
#include "_putchar.c"
/*
*print_alphabet_x10 - 0
*Return: nothing
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			if (i * j > 9)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((i * j) + '0');
			}

		}
		_putchar('\n');
	}
}
int main(void)
{
    times_table();
    return (0);
}