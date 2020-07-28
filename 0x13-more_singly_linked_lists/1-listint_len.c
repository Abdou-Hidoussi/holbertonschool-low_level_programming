#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*listint_len - 0
*
*@h: list_t
*
*Return: int
*
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
