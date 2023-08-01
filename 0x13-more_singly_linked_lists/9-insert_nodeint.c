
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
	indNode->next = NULL;

	if (idx == 0)
	{
		indNode->next = *head;
		*head = indNode;

		return (indNode);
	}

	/*check if head is empty*/
	if (temp == NULL)
	{
		temp->next = NULL;
	}

	/*traverse the node till the end*/
	for (count = 0; temp != NULL && count < idx; count++)
	{
		if (count == idx -1)
		{
			  indNode->next = temp->next;
			  temp->next = indNode;

			   return (indNode);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
