#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of the same nodes
 * in listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *dog, *cow;
	size_t nodeItems = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	dog = head->next;
	cow = (head->next)->next;

	while (cow)
	{
		if (dog == cow)
		{
			cow = head;
			while (dog != cow)
			{
				nodeItems++;
				dog = dog->next;
				cow = cow->next;
			}

			cow = cow->next;
			while (cow != dog)
			{
				nodeItems++;
				dog = dog->next;
			}

			return (nodeItems);
		}

		dog = dog->next;
		cow = (cow->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: the pointer to the head of the listint_t list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodeItems, counter;

	nodeItems = looped_listint_len(head);

	if (nodeItems == 0)
	{
		for (; head != NULL; nodeItems++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (counter = 0; counter < nodeItems; counter++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodeItems);

}
