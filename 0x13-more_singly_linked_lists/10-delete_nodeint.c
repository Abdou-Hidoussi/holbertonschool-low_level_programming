#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*delete_nodeint_at_index - 0
*
*@head: listint_t
*
*@idx: int
*
*Return: int
*/
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *next, *h;

	h = *head;
	if (idx != 0)
	{
		while (i < idx - 1 && h != NULL)
		{
			h = (*h).next;
			if (h == NULL || (*h).next == NULL)
			{
				return (-1);
			}
			i++;
		}
	}
	next = (*h).next;
	if (idx != 0)
	{
		(*h).next = (*next).next;
		free(next);
	}
	else
	{
		free(h);
		*head = next;
	}
	return (1);
}
