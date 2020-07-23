#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*print_list - 0
*
*@h: list_t
*
*Return: int
*
*/
size_t print_list(const list_t *h)
{
	int  i = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", (*h).len, (*h).str);
		h = (*h).next;
		i++;
	}
	return (i);
}
