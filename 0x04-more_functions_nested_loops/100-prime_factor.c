#include <stdio.h>
/**
*main - 0
*Return: 1 error 0 cool
*/
int main(void)
{
	long int t;
	long int i, j;

	t = 612852475143 / 2;
	for (i = t; i > 2; --i)
	{
		if (t % i == 0)
		{
			for (j = 2; j <= i / 2; ++j)
			{
				if (i % j == 0)
				{
					break;
				}
			}
			if (j == i)
			{
				printf("%ld\n", i);
				return (0);
			}
		}
	}


	printf("no factor\n");
	return (1);
}
