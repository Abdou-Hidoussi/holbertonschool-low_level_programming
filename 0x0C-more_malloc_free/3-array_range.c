#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - 0
 * @min: min
 * @max: max
 * Return: array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	j = min;
	for (i = 0; i <= (max - min); ++i)
	{
		p[i] = j;
		j++;
	}
	return (p);
}
