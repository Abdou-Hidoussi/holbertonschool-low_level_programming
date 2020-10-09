#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - 0
 * @ht: hash_table_t
 * @key: int
 * @value: int
 * Return: 0 if failed 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *next, *new;
	unsigned long int index;

	if (!(ht || *key || value))
		return (0);
	index = key_index((const unsigned char *)key, (*ht).size);
	if (!(*ht).array[index])
	{
		next = malloc(sizeof(hash_node_t));
		if (!next)
			return (0);
		(*next).key = strdup(key);
		(*next).value = strdup(value);
		(*next).next = NULL;
		(*ht).array[index] = next;
		return (1);
	}
	new = (*ht).array[index];
	while (new)
	{
		if (strcmp((const char *)key, (*new).key) == 0)
		{
			free(new->value);
			new->value = strdup(value);
			return (1);
		}
		new = (*new).next;
	}
	if (!new)
	{
		next = malloc(sizeof(hash_node_t));
		if (!next)
			return (0);
		(*new).key = strdup(key);
		(*new).value = strdup(value);
		(*new).next = (*ht).array[index];
		(*ht).array[index] = next;
		return (1);
	}
	return (1);
}
