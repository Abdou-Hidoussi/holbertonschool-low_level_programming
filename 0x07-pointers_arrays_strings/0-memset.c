#include "holberton.h"
/**
*_memset - 0
*@s: string
*@b: char
*@n: unsigned int
*Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; ++i)
	{
		s[i] = b;
	}

	return (s);
}
