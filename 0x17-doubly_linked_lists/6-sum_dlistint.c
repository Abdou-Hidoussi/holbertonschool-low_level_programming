#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*sum_dlistint - 0
*
*@head: dlistint_t
*
*Return: int
*/
int sum_dlistint(dlistint_t *head)
{
	int r = 0;

	while (head != NULL)
	{
		r += (*head).n;
		head = (*head).next;
	}
	return (r);
}
