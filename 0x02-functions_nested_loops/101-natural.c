#include <stdio.h>
/**
*main - 0
*
*Return: 0
*/
int main(void)
{
	int i, j;

	j = 0;
	for (int i = 0; i < 1024; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}
