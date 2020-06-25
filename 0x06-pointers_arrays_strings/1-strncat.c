#include "holberton.h"
/**
*_strncat - 0
*@dest: string
*@src: string
*@n: int
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = src[0];
	j = 1;
	while (j < n)
	{
		if (src[j] == '\0')
		{
			break;
		}
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j + 2] = '\0';
	return (dest);
}
