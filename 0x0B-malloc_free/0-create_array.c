#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creat array
 * @c: the content of the array
 * @size: the size of the array
 *
 * Return: array.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));
	for (i = 0; i < size; ++i)
	{
		p[i] = c;
	}

	return (p);

}
