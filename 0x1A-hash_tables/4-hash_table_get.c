#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - 0
 * @ht: hash_table_t
 * @key: int
 * Return: hash_table_t
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new;

	if (!(ht || *key || key))
		return (NULL);

	index = key_index((const unsigned char *)key, (*ht).size);

	if (!(*ht).array[index])
		return (NULL);

	new = (*ht).array[index];

	while (new)
	{
		if (strcmp((const char *)key, (*new).key) == 0)
			return ((*new).value);
		new = (*new).next;
	}
	return (NULL);
}