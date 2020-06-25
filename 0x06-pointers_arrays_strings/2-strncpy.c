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
	if (n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			if (src[i] != '\0')
			{
				dest[i] = src[i];
			}
			else
			{
				break;
			}
		}		
	}

	return (dest);
}
