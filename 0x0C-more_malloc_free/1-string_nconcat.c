#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - 0
 * @s1: string
 * @s2: string
 * @n: char number
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, t, r;

	for (i = 0; s1[i] != '\0' ; ++i)
		;
	if (s2 == NULL)
	{
		p = malloc(i * sizeof(char));
		return (p);
	}
	for (j = 0; s2[j] != '\0' ; ++j)
		;

	if (n >= j)
	{
		p = malloc((i + j) * sizeof(char));
		r = j;
	}
	else
	{
		p = malloc((i + n) * sizeof(char));
		r = n;
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (t = 0; t < (i + r); ++t)
	{
		if (t <= i - 1)
		{
			p[t] = s1[t];
		}
		else
		{
			p[t] = s2[t - i];
		}
	}
	return (p);
}
