#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *node_end;
    dlistint_t *temp;

    node_end = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (node_end == NULL)
    {
        return (NULL);
    }
    node_end->n = n;
    node_end->next = NULL;
    temp = *head;

    if (temp != NULL)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = node_end;
    }
    else
        *head = node_end;
    node_end->prev = temp;

    return (node_end);
}