#include "holberton.h"
/**
*_strncpy - 0
*@dest: string
*@src: string
*@n: int
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';
	return (dest);
}
