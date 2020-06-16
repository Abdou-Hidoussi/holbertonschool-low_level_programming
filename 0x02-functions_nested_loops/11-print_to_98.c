#include "holberton.h"
/*
*print_alphabet_x10 - 0
*Return: nothing
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; ++i)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d\n", i);
		}
	}
}
