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
	dlistint_t *location, *head_node;
	size_t count;

	location = NULL;
	if (idx == 0)
		location = add_dnodeint(h, n);
	else
	{
		head_node = *h;
		count = 1;
		if (head_node != NULL)
			while (head_node->prev != NULL)
				head_node = head_node->prev;
		while (head_node != NULL)
		{
			if (count == idx)
			{
				if (head_node->next == NULL)
					location = add_dnodeint_end(h, n);
				else
				{
					location = malloc(sizeof(dlistint_t));
					if (location != NULL)
					{
						location->n = n;
						location->next = head_node->next;
						location->prev = head_node;
						head_node->next->prev = location;
						head_node->next = location;
					}
				}
				break;
			}
			head_node = head_node->next;
			count++;
		}
	}

	return (location);
}
