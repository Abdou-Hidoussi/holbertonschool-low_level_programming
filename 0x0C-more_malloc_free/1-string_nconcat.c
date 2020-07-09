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
	unsigned int i = 0, j = 0, t = 0, r = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0' ; i++)
			;
	}

	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0' ; j++)
			;
	}
	r = j - n;
	if (n >= j)
	{
		r = 0;
	}
	p = malloc(((i + j) - r + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (t = 0; t < ((i + j) - r); t++)
	{
		if (t < i)
			p[t] = s1[t];
		else
			p[t] = s2[t - i];
	}
	p[t + 1] = '\0';
	return (p);
}
