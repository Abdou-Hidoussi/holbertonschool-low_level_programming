#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_listint2 - 0
*
*@head: listint_t
*/
void free_listint2(listint_t **head)
{
	listint_t *next, *h;

	h = *head;
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
		*head = NULL;
	}
}
