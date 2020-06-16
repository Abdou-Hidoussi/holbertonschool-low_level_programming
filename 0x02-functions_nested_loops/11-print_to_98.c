#include "holberton.h"
/*
*print_alphabet_x10 - 0
*Return: nothing
*/
void print_to_98(int n)
{
	int i;

	printf("%d\n", n);
	if (n >= 0)
	{
		for (i = 0; i <= n; ++i)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else
	{
		for (i = 0; i >= n; --i)
		{
			printf("%d, ", i);
		}
		printf("98\n");		
	}

}
