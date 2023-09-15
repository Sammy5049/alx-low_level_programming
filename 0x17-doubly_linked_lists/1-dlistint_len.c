#include "lists.h"
#include <stdio.h>
#include <stddef.h>


/**
 * dlistint_len - print elements in a list
 * @h: head of the list
 * Return: number of nodes printed
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_node = 0;

	if (h == NULL)
		return (num_of_node);
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		num_of_node++;
		h = h->next;
	}
	return (num_of_node);
}
