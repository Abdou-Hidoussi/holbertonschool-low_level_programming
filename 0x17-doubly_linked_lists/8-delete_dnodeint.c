#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*delete_nodeint_at_index - 0
*
*@head: dlistint_t
*
*@idx: int
*
*Return: int
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *next, *h;

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
