#include "holberton.h"
/**
*get_bit - 0
*@n: number
*@index: index of the bit
*Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
{
	unsigned int i = 0;

	if (n == 0 && index < 64)
		return (0);
	while (i <= 63)
	{
		if (index == i)
			return (n & 1);
		n >>= 1;
		i++;
	}
	return (-1);
}
