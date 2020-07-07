#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @str: the string to duplicate
 *
 * Return: string.
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}


	p = malloc(i * sizeof(char));

	j = 0;
	while (j < i)
	{
		p[j] = str[j];
		j++;
	}

	return (p);
}
