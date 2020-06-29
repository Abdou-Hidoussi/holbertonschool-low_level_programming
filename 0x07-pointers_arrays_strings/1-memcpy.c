#include "holberton.h"
/**
*_memcpy - 0
*@src: string
*@dest: string
*@n: unsigned int
*Return: string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}

	return (dest);
}
