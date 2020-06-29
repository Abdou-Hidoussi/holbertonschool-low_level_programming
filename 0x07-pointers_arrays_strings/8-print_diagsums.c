#include "holberton.h"
#include <stdio.h>
/**
*print_diagsums - 0
*@a: table
*@size: size of a
*
*/
void print_diagsums(int *a, int size)
{
	int i;
	long int n1, n2;

	n1 = 0;
	n2 = 0;
	for (i = 0; i < size; ++i)
	{
		n1 += a[(size + 1) * i];
	}
	for (i = size - 1; i >= 0; --i)
	{
		n2 += a[(size - 1) * (i + 1)];
	}
	printf("%ld, %ld\n", n1, n2);
}
