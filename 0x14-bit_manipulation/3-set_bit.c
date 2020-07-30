#include "holberton.h"
/**
*set_bit - 0
*@n: number
*@index: index of the bit
*Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
