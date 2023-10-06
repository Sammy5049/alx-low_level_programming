#include "hash_tables.h"

/**
 * hash_djb2 - my function to implement djb2 algorithm.
 * @str: string to generate hash value
 *
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int ct;

	hash = 5381;
	while ((ct = *str++))
	{
		hash = ((hash << 5) + hash) + ct;
	}
	return (hash);
}