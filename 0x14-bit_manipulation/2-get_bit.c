#include "holberton.h"
/**
*get_bit - 0
*@n: number
*@index: index of the bit
*Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		return ((n >> index) & 1);
	}
	else
	{
		return (-1);
	}
}
