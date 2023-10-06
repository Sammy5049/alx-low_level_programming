
#include "hash_tables.h"

/**
 * hash_table_set - Add or update element in hash table.
 * @ht: pointer to hash table.
 * @key: The key passed.
 * @value: key value
 * Return: 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newhash;
	char *copy_val;
	unsigned long int idx, count;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	copy_val = strdup(value);
	if (copy_val == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (count = idx; ht->array[count]; count++)
	{
		if (strcmp(ht->array[count]->key, key) == 0)
		{
			free(ht->array[count]->value);
			ht->array[count]->value = copy_val;
			return (1);
		}
	}

	newhash = malloc(sizeof(hash_node_t));
	if (newhash == NULL)
	{
		free(copy_val);
		return (0);
	}
	newhash->key = strdup(key);
	if (newhash->key == NULL)
	{
		free(newhash);
		return (0);
	}
	newhash->value = copy_val;
	newhash->next = ht->array[idx];
	ht->array[idx] = newhash;

	return (1);
}