#include "holberton.h"
/**
*reverse_array - 0
*@a: array
*@n: int
*
*/
void reverse_array(int *a, int n)
{
	int i, c;

	i = 0;
	while (i < n)
	{
		c = a[i];
		a[i] = a[n - i];
		a[n - i] = a[i];
		i++;
	}
}
