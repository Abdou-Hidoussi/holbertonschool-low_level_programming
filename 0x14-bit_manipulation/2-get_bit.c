#include "holberton.h"
/**
*get_bit - 0
*@n: number
*@index: index of the bit
*Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; ++i)
	{
		n >>= 1;
	}
	return (n & 1);
}
