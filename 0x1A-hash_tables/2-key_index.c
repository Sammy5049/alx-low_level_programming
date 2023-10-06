#include "hash_tables.h"

/**
 * key_index - The index key-value will be stored
 * @key: The key to get the index of.
 * @size: Arrray size of hash table.
 *
 * Return: index of key passed.
 *
 * Description: Uses the djb2 algorithm from function.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}