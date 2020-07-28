#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_nodeint_end - 0
*
*@head: listint_t
*@n: int
*Return: listint_t
*
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new, *h;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	(*new).n = malloc(sizeof(int));
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
