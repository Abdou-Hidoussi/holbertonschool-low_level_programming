#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - add two string
 * @s1: the string to add
 * @s2: the string to add
 * Return: string.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, r;

	i = 0;
	j = 0;
	r = 0;
	while (s1[i] != NULL)
	{
		i++;
	}
	while (s2[j] != NULL)
	{
		j++;
	}

	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}

	while (r < i)
	{
		p[r] = s1[r];
		r++;
	}

	while (r <= i + j)
	{
		p[r] = s2[r - i];
		r++;
	}

	return (p);

}
