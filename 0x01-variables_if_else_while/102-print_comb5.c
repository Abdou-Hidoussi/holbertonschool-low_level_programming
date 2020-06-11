#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
	unsigned int i1, i2;

	for (i1 = 0; i1 <= 99; ++i1)
	{
		for (i2 = i1; i2 <= 99; ++i2)
		{
			if (i1 != i2)
			{
				if (i1 != 0 || i2 != 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i1 / 10 + '0');
				putchar(i1 % 10 + '0');
				putchar(' ');
				putchar(i2 / 10 + '0');
				putchar(i2 % 10 + '0');
			}
		}
	}

	putchar('\n');
	return (0);
}
