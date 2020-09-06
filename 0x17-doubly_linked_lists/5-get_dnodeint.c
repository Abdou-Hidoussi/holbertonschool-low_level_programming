#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*get_dnodeint_at_index - 0
*
*@head: dlistint_t
*
*@index: int
*
*Return: dlistint_t
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = (*head).next;
	}
	return (head);
}
