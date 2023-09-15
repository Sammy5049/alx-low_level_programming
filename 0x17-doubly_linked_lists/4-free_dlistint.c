#include "lists.h"
/**
 * free_dlistint - free the list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	/*dlistint_t *temp_node; */

	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
