#include "holberton.h"
/**
*flip_bits - 0
*@n: number
*@m: number
*Return: i
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while(!n && !m)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (i);
}
