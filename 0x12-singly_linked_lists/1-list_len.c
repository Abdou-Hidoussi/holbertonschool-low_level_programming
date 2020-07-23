#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*list_len - 0
*
*@h: list_t
*
*Return: int
*
*/
size_t list_len(const list_t *h)
{
	int  i = 0;

	while (h != NULL)
	{
		h = (*h).next;
		i++;
	}
	return (i);
}
