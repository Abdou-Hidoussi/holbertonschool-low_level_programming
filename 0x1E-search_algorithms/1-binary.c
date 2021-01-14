#include "search_algos.h"
/**
 * binary_search - Task 1
 * @array: pointer
 * @size: size_t
 * @value: int
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, a = 0, b = size - 1;

	if (!array)
	{
		return (-1);
	}
	while (b >= a)
	{
		printf("Searching in array: ");
		for (i = a; i < b; i++)
		{
			printf("%d, ", array[i]);
		}

		printf("%d\n", array[b]);
		i = (a + b) / 2;

		if (array[i] < value)
		{
			a = i + 1;
		}
		else
		{
			if (array[i] > value)
				b = i - 1;
			else
				return (i);
		}
	}
	return (-1);
}
