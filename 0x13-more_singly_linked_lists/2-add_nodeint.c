#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*listint_len - 0
*@h: list
*Return:: i
*/

size_t listint_len(const listint_t *h)
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
*add_nodeint - 0
*
*@head: list_t
*@n: int
*Return: list_t
*
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		(*new).n = n;
		(*new).next = *head;
		*head = new;
		return (new);
	}
	return (NULL);
}
