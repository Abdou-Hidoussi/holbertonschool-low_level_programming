#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*print_dlistint - 0
*
*@h: dlistint_t
*
*Return: int
*
*/
size_t print_dlistint(const dlistint_t *h)
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
