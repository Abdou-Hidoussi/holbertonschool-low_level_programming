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
