#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*_strlen - 0
*@s: char
*Return:: i
*/
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (*s != '\0' && s)
	{
		s++;
		i++;
	}
	return (i);
}
/**
*add_node - 0
*
*@head: list_t
*@str: char *
*Return: list_t
*
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	(*new).str = malloc(sizeof(str));
	(*new).str = strdup(str);
	(*new).len = _strlen(str);
	(*new).next = *head;
	*head = new;
	return (new);

}
