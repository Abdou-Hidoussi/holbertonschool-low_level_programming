#include "holberton.h"
/**
*_strcmp - 0
*@s1: string
*@s2: string
*Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int n1, n2, i;

	n1 = 0;
	n2 = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		n1 += s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		n2 += s2[i];
		i++;
	}

	if (n1 > n2)
	{
		return (15);
	}
	else if (n2 > n1)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
