#include "holberton.h"
/**
*prime - the true prime
*@i: counter
*@n: the num
*Return: int
*/
int prime(int n, int i)
{
	if (i < 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (prime(n, i - 1));
}
/**
*is_prime_number - 0
*@n: the num
*Return: int
*/
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
