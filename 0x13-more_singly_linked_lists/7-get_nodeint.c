#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*get_nodeint_at_index - 0
*
*@head: listint_t
*
*@index: int
*
*Return: listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
