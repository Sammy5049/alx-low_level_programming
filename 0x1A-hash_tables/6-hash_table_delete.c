
#include "hash_tables.h"

/**
 * hash_table_delete - func to Delete hash table.
 * @ht: pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *temp;
	unsigned long int count;

	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count] != NULL)
		{
			node = ht->array[count];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}