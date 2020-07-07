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
	i = 0;
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
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(50, 50);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 50, 50);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 50, 50);
    return (0);
}