#include "search_algos.h"
/**
 * linear_search - Task 0
 * @array: pointer
 * @size: size_t
 * @value: int
 * Return: index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
