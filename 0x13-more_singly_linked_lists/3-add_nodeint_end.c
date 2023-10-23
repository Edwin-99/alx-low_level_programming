#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @n: integer value to store in the new node
 *
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *node = malloc(sizeof(listint_t));
    if (!node)
        return (NULL);

    node->n = n;
    node->next = NULL;

    if (!*head)
    {
        *head = node;
    }
    else
    {
        listint_t *temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = node;
    }

    return (node);
}
