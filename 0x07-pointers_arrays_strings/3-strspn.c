#include "holberton.h"
/**
*_strspn - 0
*@s: string
*@accept: string
*Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	j = 0;
	while (s[j] != '\0')
	{
		i = 0;
		while (s[i] == accept[i])
		{
			if (accept[i + 1] == '\0')
			{
				return (i);
			}
			i++;
		}
		j++;
	}


	return (0);
}
