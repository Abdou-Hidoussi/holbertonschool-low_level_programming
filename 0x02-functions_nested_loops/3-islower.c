#include "holberton.h"
/**
*_islower - 0
*@c: an intiger
*Return: either 1 or 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
