#include "holberton.h"
/**
*_strlen - 0
*@s: char
*Return:: i
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
