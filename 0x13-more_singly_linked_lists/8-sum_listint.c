#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*sum_listint - 0
*
*@head: listint_t
*
*Return: int
*/
int sum_listint(listint_t *head)
{
	int r = 0;

	while (head != NULL)
	{
		r += (*head).n;
		head = (*head).next;
	}
	return (r);
}
