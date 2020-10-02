#include "hash_tables.h"
/**
 * hash_table_create - 0
 * @size: int
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);

	if (size == 0)
		return (tab);

	(*tab).array = malloc(sizeof(hash_node_t *) * size);
	if ((*tab).array == NULL)
		return (NULL);

	(*tab).size = size;
	return (tab);
}
