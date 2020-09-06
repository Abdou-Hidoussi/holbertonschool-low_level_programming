#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*dlistint_len - 0
*
*@h: dlistint_t
*
*Return: int
*
*/
size_t dlistint_len(const dlistint_t *h)
{
	int  i = 0;

	while (h != NULL)
	{
		h = (*h).next;
		i++;
	}
	return (i);
}
