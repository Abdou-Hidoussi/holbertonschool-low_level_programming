#include "holberton.h"
/**
*_strspn - 0
*@s: string
*@accept: string
*Return: unsigned int
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (s[i] == accept[i])
	{
		i++;
	}
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (NULL);
	}
}
