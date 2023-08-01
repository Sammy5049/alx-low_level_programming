#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: single linked list data type to ttraverse
 * Return: return the length of the node/number of nodes
 */


size_t listint_len(const listint_t *h)
{
	/* initialize the count */
	size_t countNum = 0;

	/*traverse through the list of nodes and count*/
	while (h)
	{
		countNum++;
		h = h->next;
	}
	return (countNum);
}
