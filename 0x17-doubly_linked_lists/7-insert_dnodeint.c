#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node
 * @h: head pointer
 * @n: value
 * @idx: insert position
 * Return: new node location
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *location, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	location = malloc(sizeof(dlistint_t));

	if (location == NULL)
		return (NULL);

	location->n = n;
	location->next = temp->next;
	location->prev = temp;
	location->next->prev = location;
	location->next = location;

	return (location);
}

