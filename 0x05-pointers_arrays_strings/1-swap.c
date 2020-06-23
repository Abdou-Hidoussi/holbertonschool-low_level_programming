#include "holberton.h"
/**
*swap_int - 0
*@a: int
*@b: int
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
