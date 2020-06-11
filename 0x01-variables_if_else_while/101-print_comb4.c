#include <stdio.h>
/**
*main - maine function
*Return: 0
*/
int main(void)
{
	int i, j ,z;

	for (i = '0'; i <= '9'; ++i)
	{
		for (j = i; j <=  '9'; ++j)
		{
			for (z = j; z <=  '9'; ++j)
			{
				if (i != j)
				{
					if (i != '0' || j != '1' || z != '2')
					{
						putchar(',');
						putchar(' ');
					}
					putchar(i);
					putchar(j);
					putchar(z);
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
