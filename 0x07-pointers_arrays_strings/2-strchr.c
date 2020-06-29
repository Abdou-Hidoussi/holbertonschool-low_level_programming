#include "holberton.h"
#include <stdio.h>
/**
*_strchr - 0
*@s: string
*@c: char
*Return: string
*/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (NULL);
}
