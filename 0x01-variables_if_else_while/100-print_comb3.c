#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
	int i,j;

	for (i = '0'; i - 1 < '9'; ++i)
	{
		for (j = '0'; j - 1 <  i; ++j)
		{
			if ( i != j)
			{
				if (i != '1' || j != '0')
				{
					putchar(',');
					putchar(' ');
				}
				putchar(j);
				putchar(i);
			}
		}
	}

	putchar('\n');
	return (0);
}