#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*print_listint - 0
*
*@h: list_t
*
*Return: int
*
*/
size_t print_listint(const listint_t *h)
{
	int  i = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		i++;
	}
	return (i);
}
