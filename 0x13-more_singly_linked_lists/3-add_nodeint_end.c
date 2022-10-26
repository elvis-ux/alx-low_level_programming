#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of the list
 * @head: pointer to a node
 * @n: integer
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t new;

	new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
