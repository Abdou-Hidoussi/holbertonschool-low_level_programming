#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_dlistint - 0
*
*@h: dlistint_t
*/
void free_dlistint(dlistint_t *h)
{
	dlistint_t *next;

	if (h != NULL)
	{
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
}
