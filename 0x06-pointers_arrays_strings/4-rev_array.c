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

	c = 0;
	i = 0;
	while (i < n && a[i] != '\0')
	{
		c = a[i];
		a[i] = a[n - i];
		a[n - i] = a[i];
		i++;
	}
}
