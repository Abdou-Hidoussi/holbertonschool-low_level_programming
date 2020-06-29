#include "holberton.h"
/**
*_strpbrk - 0
*@s: string
*@accept: string
*Return: string
*/
char *_strpbrk(char *s, char *accept)
{
	while (accept[i] != '\0')
	{
		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				return (&s[j]);
			}
		}
	}

	return (NULL);
}
