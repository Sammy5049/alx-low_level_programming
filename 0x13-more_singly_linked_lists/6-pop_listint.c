#include "lists.h"

/**
 * pop_listint - funct to delete the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int holdNum;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	holdNum = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (holdNum);
}
