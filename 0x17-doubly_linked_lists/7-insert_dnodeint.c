#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*dlistint_len - 0
*
*@h: dlistint_t
*
*Return: int
*
*/
size_t dlistint_len(const dlistint_t *h)
{
	int  i = 0;

	while (h != NULL)
	{
		h = (*h).next;
		i++;
	}
	return (i);
}
/**
*insert_dnodeint_at_index - 0
*
*@head: dlistint_t
*
*@idx: int
*
*@n: int
*
*Return: dlistint_t
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
	unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *h;

	if (head == NULL && idx != 0)
	{
		return (NULL);
	}
	if (idx > dlistint_len(*head))
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new = add_dnodeint(head, n);
	}
	else if (idx == dlistint_len(*head))
	{
		new = add_dnodeint_end(head, n);
	}
	else
	{
		h = *head;
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		(*new).n = n;
		(*new).next = NULL;
		(*new).prev = NULL;
		while (i < idx)
		{
			i++;
			h = (*h).next;
		}
		(*new).next = (*h).next;
		(*new).prev = h;
		(*h).next = new;
	}
	return (new);
}
