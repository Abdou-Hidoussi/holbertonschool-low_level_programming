#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - allocate a grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to grid.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(width * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		p[i] = malloc(height * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; ++j)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
