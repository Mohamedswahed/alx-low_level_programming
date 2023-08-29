#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head
 * @idx: index of the list
 * @n: data to be added to new node
 * Return: address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	tmp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		tmp = tmp->next;
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
