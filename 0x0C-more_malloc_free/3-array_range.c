#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max + 2) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	j = min;
	for (i = 0; i <= (max - min + 1); ++i)
	{
		p[i] = j;
		j++;
	}
	return (p);
}
