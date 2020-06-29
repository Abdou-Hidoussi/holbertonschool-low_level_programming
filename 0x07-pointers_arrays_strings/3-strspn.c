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
		while (s[j + i] == accept[i])
		{
			i++;
		}
		j++;
	}


	return (i);
}
