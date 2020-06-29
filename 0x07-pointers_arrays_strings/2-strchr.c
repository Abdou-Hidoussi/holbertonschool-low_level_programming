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
	for (i = 0; s[i] >= '\0';++i)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (0);
}
