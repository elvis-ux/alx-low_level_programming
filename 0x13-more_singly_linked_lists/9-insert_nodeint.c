#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a
 * given position
 * @head: pointer to the first node
 * @n: variable
 * @idx: position to insert node
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curt;
	listint_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));

	if (!new)
		return (0);
	new->next = NULL;
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}
	curt = *head;
	while (idx != 1)
	{
		curt = curt->next;
		--idx;
		if (curt == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = curt->next;
	curt->next = new;

	return (new);
}
