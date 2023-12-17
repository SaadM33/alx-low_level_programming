#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at specific index
 * @h: head of linked list
 * @idx: index of new node
 * @n: new node value
 * Return: inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	int i = 0;

	if (h == NULL)
		return (0);

	if (idx == 0)
        	return (add_dnodeint(h, n));

	current = *h;

	while (i < idx - 1)
	{
		current = current->next;
		i++;
		if (current == NULL)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current->next;
	new->prev = current;

	if (current->next != NULL)
        	current->next->prev = new;

	return (new);
}
