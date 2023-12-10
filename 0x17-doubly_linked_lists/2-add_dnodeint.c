#include "lists.h"
#include <string.h>

/**
 * add_dnodeint - adds a node to the beginning of a linked list
 * @head: double pointer to the head of the linked list
 * @n: integer element to be added
 * Return: pointer to the new node or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULL)
    {
        return (NULL);  // No need to free(new_node) before returning NULL
    }

    new_node->n = n;
    new_node->next = *head;
    new_node->prev = NULL;

    if (*head != NULL)
    {
        (*head)->prev = new_node;
    }

    *head = new_node;

    return (new_node);
}
