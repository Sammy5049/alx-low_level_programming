#include "hash_tables.h"

/**
 * hash_table_create - func to create a hash table.
 * @size: The size of array.
 *
 * Return: when error- NULL.
 *         if not - a pointer to new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int count;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
                return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
                return (NULL);
	for(count = 0; count < size; count++)
		ht->array[count] = NULL;
	return (ht);
}