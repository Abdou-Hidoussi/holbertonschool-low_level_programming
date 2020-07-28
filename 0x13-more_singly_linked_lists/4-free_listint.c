#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_listint - 0
*
*@h: listint_t
*/
void free_listint(listint_t *h)
{
	listint_t *next;

	while (h != NULL)
	{
		next = (*h).next;
		free(h);
		if (next == NULL)
			h = NULL;
		else
			h = next;
	}
	free(h);
	free(next);
}
