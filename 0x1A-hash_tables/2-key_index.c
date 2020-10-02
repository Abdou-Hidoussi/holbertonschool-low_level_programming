#include "hash_tables.h"
/**
 * key_index - 0
 * @key: the key
 * @size: size
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
