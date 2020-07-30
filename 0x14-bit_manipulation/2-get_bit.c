#include "holberton.h"
/**
*get_bit - 0
*@n: number
*@index: index of the bit
*Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{

	if (index == 0)
	{
		return (n & 1);
	}
	else if (n > 1)
	{
		return (get_bit(n >> 1, index - 1));
	}
	else
	{
		return (-1);
	}
}
