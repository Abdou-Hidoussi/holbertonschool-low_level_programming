#include "holberton.h"
/**
*get_bit - 0
*@n: number
*@index: index of the bit
*Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (i < 64)
	{
		if (i == index)
		{
			return (n & 1);
		}
		n >>= 1;
		i++;
	}
	return (-1);
}
