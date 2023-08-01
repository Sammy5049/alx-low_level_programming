#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: return the address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *speed = head;
	listint_t *weak = head;

	if (!head)
		return (NULL);

	while (weak != NULL && speed != NULL && speed->next != NULL)
	{
		speed = (speed->next)->next;
		weak = weak->next;
		if (speed == weak)
		{
			weak = head;
			while (weak != speed)
			{
				weak = weak->next;
				speed = speed->next;
			}
			return (speed);
		}
	}

	return (NULL);
}

