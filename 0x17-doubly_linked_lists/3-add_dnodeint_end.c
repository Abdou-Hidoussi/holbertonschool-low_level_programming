#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_dnodeint_end - 0
*
*@head: dlistint_t
*@n: int
*Return: dlistint_t
*
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	(*new).n = n;
	(*new).next = NULL;
	h = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while ((*h).next != NULL)
			h = (*h).next;
		(*h).next = new;
	}
	return (*head);

}
