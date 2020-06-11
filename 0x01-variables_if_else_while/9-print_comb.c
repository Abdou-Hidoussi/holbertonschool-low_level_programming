#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
	for (int i = '0'; i - 1 < '9'; ++i)
	{
		if (i != '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i);
	}

	putchar('\n');
	return (0);
}
