#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_list - 0
*
*@h: list_t
*/
void free_list(list_t *h)
{
	list_t *next;

	while (h != NULL)
	{
		next = (*h).next;
		free((*h).str);
		free(h);
		if (next == NULL)
			h = NULL;
		else
			h = next;
	}
	free(h);
	free(next);
}
