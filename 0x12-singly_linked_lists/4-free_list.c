#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*free_list - 0
*
*@h: list_t
*/
void free_list(list_t *h)
{
	struct list_s *next = (*h).next;

	while (next != NULL)
	{
		next = (*h).next;
		free((*h).str);
		free(h);
		h = next;
		next = (*h).next;
	}
}
