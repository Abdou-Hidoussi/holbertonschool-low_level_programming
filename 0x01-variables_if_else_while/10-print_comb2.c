#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
	for (int i = '0'; i - 1 < '9'; ++i)
	{
		for (int j = '0'; j - 1 < '9'; ++j)
		{
			if (i != '0' || j != '0')
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i);
			putchar(j);
		}
	}

	putchar('\n');
	return (0);
}
