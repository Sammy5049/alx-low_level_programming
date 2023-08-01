#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - returns a point to the head of node
 * @head: pointer to the node head
 * @n: The value carried by the new node
 * Return: returns the new list of the node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/*create the new node*/
	listint_t *newNode;

	/*create a space in the memory for the new node*/
	newNode = (listint_t *) malloc(sizeof(listint_t));

	/*if malloc returns null*/
	if (newNode == NULL)
	{
		return (NULL);
	}

	/* assign value to the new node*/
	newNode->n = n;

	/*check if the list is empty*/
	if (*head == NULL)
	{
		newNode->next = NULL;
	}

	else
	{
		/* point newNode next to what head was pointing to if list not empty */
		newNode->next = *head;
	}

	*head = newNode;


	return (newNode);
}
