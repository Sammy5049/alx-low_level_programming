#include "lists.h"

/**
 * sum_dlistint - sull all list data
 * @head: point to start of list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_all = 0;

	while (head != NULL)
	{
		sum_all += head->n;
		head = head->next;
	}
	return (sum_all);
}