#include "lists.h"


/**
 * free_listint2 - frees the listint_t list
 * @head: pointer to the memory to be freed
 */

void free_listint2(listint_t **head)
{
		listint_t *temp;

		if (head == NULL)
		{
			return;
		}

		while (*head != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		*head = NULL;
}
