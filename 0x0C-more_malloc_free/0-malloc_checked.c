#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - 0
 * @b: unsigned int
 * Return 98 in case of error
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(unsigned int));
	if (p == NULL)
	{
		exit(98);
	}
}
