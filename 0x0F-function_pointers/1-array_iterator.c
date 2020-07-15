#include <stdio.h>
#include "function_pointers.h"
/**
*array_iterator - 0
*@array: array
*@size: size of array
*@action: a function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; ++i)
	{
		(*action)(array[i]);
	}
}
