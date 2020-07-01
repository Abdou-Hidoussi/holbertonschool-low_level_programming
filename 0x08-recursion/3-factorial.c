#include "holberton.h"
/**
*factorial - 0
*@n: int
*Return: int
*/
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n < 0)
	{
		return (-1);
	}
	return (1);
}
