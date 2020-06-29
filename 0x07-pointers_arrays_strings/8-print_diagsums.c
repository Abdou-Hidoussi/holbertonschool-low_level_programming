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
	long long int n;

	n = 0;
	for (i = 1; i < size; ++i)
	{
		n += a[i][i];
	}
	printf("%lli\n", n);
}
