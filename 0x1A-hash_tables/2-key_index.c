#include "hash_tables.h"

/**
 * key_index - hash function to get index by key
 * @key: key of element
 * @size: size of hash table
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);
	return (i % size);
}
