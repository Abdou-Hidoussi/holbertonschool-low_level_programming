#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*insert_nodeint_at_index - 0
*
*@h: listint_t
*
*@idx: int
*
*@n: int
*
*Return: listint_t
*/
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *next, *head;

	head = *h;
	next = malloc(sizeof(listint_t));
	if (next == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < idx - 1&& head != NULL; i++)
	{
		head = (*head).next;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	(*next).n = n;
	(*next).next = (*head).next;
	(*head).next = next;
	return ((*head).next);
}
