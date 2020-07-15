#include <stdio.h>
#include "function_pointers.h"
/**
*int_index - 0
*@array: array
*@size: size of array
*@cmp: a function
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; ++i)
		{
			if((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
