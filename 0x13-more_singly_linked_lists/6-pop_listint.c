#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*pop_listint - 0
*
*@head: listint_t
*
*Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *next, *h;
	int r;

	h = *head;
	if (head != NULL)
	{
		next = (*h).next;
		r = (*h).n;
		free(h);
		*head = next;
		return (r);
	}
	return (0);
}
