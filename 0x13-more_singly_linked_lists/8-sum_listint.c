#include "lists.h"

/**
 * sum_listint - sum up all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: total sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		add += temp->n;
		temp = temp->next;
	}
	return (add);
}
