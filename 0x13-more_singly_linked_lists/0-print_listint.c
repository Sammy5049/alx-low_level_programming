#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a singly linked list
 * @h: linked list of data type listint_t to be printed
 *
 * Return: the number of nodes
 */



size_t print_listint(const listint_t *h)
{
	size_t count;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

