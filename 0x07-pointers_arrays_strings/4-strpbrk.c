#include "holberton.h"
/**
*_strpbrk - 0
*@s: string
*@accept: string
*Return: string
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				return (&s[j]);
			}
			j++;
		}
		i++;
	}

	return (0);
}
