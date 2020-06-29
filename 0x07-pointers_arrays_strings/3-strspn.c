#include "holberton.h"
/**
*_strspn - 0
*@s: string
*@accept: string
*Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;
	j = 0;
	while (s[j] != '\0')
	{
		i = 0;
		while (s[i] == accept[i])
		{
			if (accept[i] == s[j])
			{
				n += 1;
			}
			i++;
		}
		j++;
	}


	return (n);
}
