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
void free_grid(int **grid, int height)
{
	int i;


	for (i = 0; i < height; ++i)
	{
		free(*grid[i]);
		grid++;
	}
}