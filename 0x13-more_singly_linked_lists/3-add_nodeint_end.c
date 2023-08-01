#include "lists.h"
#include <stdlib.h>



/**
 * add_nodeint_end - add new node to the end of the list
 * @head: head of the node list
 * @n: new node to be added
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* initialize the new node and temp node */
	listint_t *endNode;
	listint_t *temp;
	temp = *head;
	
	/* assign space in the memory to the new node */
	endNode = (listint_t *) malloc(sizeof(listint_t));

	if (endNode == NULL)
	{
		return (NULL);
	}

	endNode->n = n;
	endNode->next = NULL;

	/*check if the list is empty*/

	if (temp == NULL)
	{
		*head = endNode;
		return (endNode);
	}
	/*traverse the node list till the endnode*/
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	}
	temp->next = endNode;

	return (endNode);
}
