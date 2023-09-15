#include "lists.h"
/**
 * free_dlistint - free the list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	if (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}

