#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_dnodeint - 0
*
*@head: dlistint_t
*@n: int
*Return: dlistint_t
*
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new)
	{
		(*new).n = n;
		(*new).next = *head;
		(*new).prev = NULL;
		h = *head;
		(*h).prev = new;
		*head = new;
		return (new);
	}
	return (NULL);
}
