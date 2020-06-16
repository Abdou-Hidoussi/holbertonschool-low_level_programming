#include <stdio.h>
/**
*main - 0
*
*Return: 0
*/
void main(void)
{
	int i;
	long int j;

	j = 0;
	for (i = 0; i < 1024; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
	}
	printf("%ld\n", j);
}
