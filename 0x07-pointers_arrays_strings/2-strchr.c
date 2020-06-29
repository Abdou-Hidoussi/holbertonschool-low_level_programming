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
	if (s[0] == '\0')
	{
		return (0);
	}
	if (c == '\0')
	{
		i = 0;
		while (s[i] != '\0')
		{
			i++;
		}
		return (&s[i + 1]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (0);
}
