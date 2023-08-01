
#include "lists.h"
#include <stdlib.h>


/**
 * insert_nodeint_at_index - add new node to a position in the node
 * @head: pointer to the first element of node
 * @idx: the index to make change
 * @n: node to be added
 * Return: return the new list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *indNode;
	listint_t *temp = *head;

	/* assign space in memmory for new node */
	indNode = (listint_t *) malloc(sizeof(listint_t));

	/*check if malloc return null*/
	if (indNode == NULL)
	{
		return (NULL);
	}

	indNode->n = n;

	if (idx == 0)
	{
		indNode->next = *head;
		*head = indNode;
	}

	/*check if head is empty*/
	if (temp == NULL)
	{
		temp->next = NULL;
	}

	/*traverse the node till the end*/
	for (count = 1; temp != NULL && count < idx; count++)
	{
		temp = temp->next;
	}

	/*point next node to what temp was pointing to*/
	indNode->next = temp->next;

	/*point temp next to the index node*/
	temp->next = indNode;
	return (NULL);
}
