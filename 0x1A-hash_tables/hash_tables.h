#ifndef HASH
#define HASH

#include <stdio.h>

/**
 * struct hash_node_s - holberton
 *
 * @key: int
 * @value: int
 * @next: int
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - holberton
 *
 * @size: int
 * @array: int
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif
