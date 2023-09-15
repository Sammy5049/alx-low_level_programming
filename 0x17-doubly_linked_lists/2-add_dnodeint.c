#include "lists.h"
/**
 * add_dnodeint - adds new node at start
 * @head: head of node postion
 * @n: node  to add
 * Return: address of the new element or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	h_node = *head;

	if (h_node != NULL)
	{
		while (h_node->prev != NULL)
			h_node = h_node->prev;
	}

	new_node->next = h_node;
	if (h_node != NULL)
		h_node->prev = new_node;
	*head = new_node;
	return (new_node);
}
