#include "holberton.h"
/**
*_strlen_recursion - 0
*@s: string
*Return: length of str
*/
int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if (*s == '\0')
	{
		return (0);
	}
	i += _strlen_recursion(++s);
	return (i);
}
