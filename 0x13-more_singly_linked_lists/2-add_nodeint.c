#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
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
