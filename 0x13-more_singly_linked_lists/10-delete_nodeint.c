#include "lists.h"


/**
 * delete_nodeint_at_index - deletes a node from the list
 * @head: pointer to the first element of the node
 * @index: the indext of element to b deleted
 * Return: returs 1 or -1 if failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL;
	unsigned int counter = 0;
	listint_t *temp = *head;

	/*first check if it's impossible to delete named index*/
	if (temp == NULL)
	{
		return (-1);
	}

	/*check if index is zero*/
	if (index == 0)
	{
		*head = (temp)->next;
		free(temp);

		return (1);
	}



	/*traverse through the node for deletion*/
	for (counter = 1; counter < index - 1; counter++)
	{
		if (temp != NULL || temp->next != NULL)
		{
			return (-1);
		}
		else
		{
			temp = temp->next;
		}
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
